import pandas as pd
import numpy as np
import random
import scipy.stats as stats

def chi2(observed, expected):
    peason_residuals = []
    for row, expect in zip(observed, expected):
        peason_residuals.append([(observed - expect) ** 2 for observe in row])
        return np.sum(peason_residuals)

def perm_fuc(box, expected):
    random.shuffle(box)
    sample_click = [sum(random.sample(box, 1000)), sum(random.sample(box, 1000)), sum(random.sample(box, 1000))]
    sample_noclicks = [1000 - n for n in sample_click]
    return chi2([sample_click, sample_noclicks], expected)
def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    click_rate : pd.DataFrame = pd.read_csv(folder + "click_rates.csv")
    print(click_rate.head())
    print(click_rate.info())
    clicks = click_rate.pivot(index = 'Click', columns = 'Headline', values = 'Rate')
    print(clicks)
    row_average = clicks.mean(axis = 1)
    print(pd.DataFrame({'Headline A' : row_average, 'Headline B' : row_average, 'Headline C' : row_average}))

    box = [1] * clicks.sum(axis=1).Click
    box.extend([0] * clicks.sum(axis=1)['No-click'])
    random.shuffle(box)

    expected_clicks = clicks.sum(axis=1)['Click'] / 3
    expected_noclicks = 1000 - expected_clicks
    expected = [expected_clicks, expected_noclicks]
    chi2observed = chi2(clicks.values, expected)
    pem_chi2 = [perm_fuc(box, expected) for _ in range(3000)]
    resampled_p_value = sum(pem_chi2 > chi2observed) / len(pem_chi2)
    print(f"chi2 observed : {chi2observed:.4f}")
    print(f"Resampled p-value : {resampled_p_value:.4f}")
if __name__ == "__main__":
    main()