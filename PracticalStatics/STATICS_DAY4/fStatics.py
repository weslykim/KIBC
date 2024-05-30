import scipy.stats as statsmodule
import numpy as np
import pandas as pd
import statsmodels.formula.api as smf
import statsmodels.api as sm

def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    session_times : pd.DataFrame = pd.read_csv(folder + "web_page_data.csv")
    model = smf.ols("Time ~ Page", data = session_times).fit()
    aov_table = sm.stats.anova_lm(model, typ = 2)
    print(aov_table)


if __name__ == "__main__":
    main()