import scipy.stats as stats
import matplotlib.pyplot as plt
import pandas as pd
import numpy as np

def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    sp500_px : pd.DataFrame = pd.read_csv(folder + "sp500_data.csv", index_col=0)
    nflx = sp500_px.NFLX
    nflx = np.diff(np.log(nflx[nflx > 0]))
    fig = plt.figure()
    ax = fig.add_subplot()
    stats.probplot(nflx, plot=ax)
    plt.show()


if __name__ == "__main__":
    main()