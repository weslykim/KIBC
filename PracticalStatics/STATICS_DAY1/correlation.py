import pandas as pd
import numpy as np
from statsmodels import robust
import matplotlib.pyplot as plt
import seaborn as sns

def main():
    folder = "/home/ubnt/Desktop/PracticalStatics/data/"
    sp500_px = pd.read_csv(folder + "sp500_data.csv", index_col=0)
    sp500_sym = pd.read_csv(folder + "sp500_sectors.csv")
    etfs = sp500_px.loc[sp500_px.index > '2012-07-01', sp500_sym[sp500_sym['sector'] == 'etf']['symbol']]
    sns.heatmap(etfs.corr(), vmin =-1, vmax =1, cmap =sns.diverging_palette(20, 220, as_cmap =True))
    plt.show()
if __name__ == "__main__":
    main()