import pandas as pd
import numpy as np
from statsmodels import robust
import matplotlib.pyplot as plt

def main():
    folder = "/home/ubnt/Desktop/PracticalStatics/data/"
    state = pd.read_csv(folder + "state.csv")

    binnedPopulation = pd.cut(state["Population"], 10)
    binnedPopulation.value_counts()
    print(binnedPopulation)
    print(binnedPopulation.value_counts())

    # plt.hist(state["Population"], bins=10)
    # plt.show()
    # ax1 = state["Population"].plot.hist(bins=10)
    # plt.show()
    # plt.boxplot(state["Population"])
    # plt.show()
    ax = state['Murder.Rate'].plot.hist(density = True, xlim = [0, 12], bins=range(1, 12))
    state['Murder.Rate'].plot.density(ax = ax)
    ax.set_xlabel('Murder.Rate (per 100,000)')
    plt.show()
    # state["Population"].plot.box()
if __name__ == "__main__":
    main()