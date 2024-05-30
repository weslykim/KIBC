import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

def perm_test(df: pd.DataFrame):
    df = df.copy()
    df["Time"] = np.random.permutation(df["Time"].values) #type : ignore
    return df.groupby("Page").std().values[0]
def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    four_session = pd.read_csv(folder + "four_sessions.csv")

    print(four_session.head())
    print(four_session.info())

    observed_variance = four_session.groupby("Page").std().values.ravel()
    observed_mean = four_session.groupby("Page").mean().values.ravel()
    print(f"Observed mean : {observed_mean}")
    print(f"Observed variance : {observed_variance}")

    perm_variance = [perm_test(four_session) for _ in range(3000)]
    print(f"Pr(Prob) of permuted variance : {np.mean(perm_variance > observed_variance)}")

    fig = plt.figure()
    ax = fig.add_subplot()
    ax.hist(perm_variance, bins = 11, rwidth = 0.9)
    for i in observed_variance:
        ax.axvline(x = i, color = 'black', lw = 2)
    
    ax.text(60, 200, 'Observed\nvariance', bbox = {'facecolor': 'white'})
    ax.set_xlabel("Session time variance")
    ax.set_ylabel("Frequency")
    plt.show()

if __name__ == "__main__":
    main()