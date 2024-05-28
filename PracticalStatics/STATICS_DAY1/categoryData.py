import pandas as pd
import numpy as np
from statsmodels import robust
import matplotlib.pyplot as plt

def main():
    folder = "/home/ubnt/Desktop/PracticalStatics/data/"
    dfw = pd.read_csv(folder + "dfw_airline.csv")
    ax = dfw.transpose().plot.bar(figsize = (4, 4), legend = False)
    ax.set_xlabel('Cause of delay')
    ax.set_ylabel('Count')
    plt.show()

if __name__ == "__main__":
    main()