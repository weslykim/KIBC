import pandas as pd
import numpy as np
from statsmodels import robust
import matplotlib.pyplot as plt
import seaborn as sns
from matplotlib.collections import EllipseCollection

def plot_corr_ellipses(data, figsize = None, **kwargs):
    M = np.array(data)
    if not M.ndim == 2:
        raise ValueError('data must be a 2D array')
    fig, ax = plt.subplots(1, 1, figsize=figsize, subplot_kw = {'aspect': 'equal'})
    ax.set_xlim(-0.5, M.shape[1] -0.5)
    ax.set_ylim(M.shape[0], -0.5, -0.5)
    ax.invert_yaxis()

    xy = np.indices(M.shape)[::-1].reshape(2, -1).T

    w = np.ones_like(M).ravel() + 0.01
    h = 1 - np.abs(M).ravel() - 0.01
    a = 45 * np.sign(M).ravel()

    ec = EllipseCollection(width = w, height = h, angles = a, units = 'x', offsets = xy, 
                           norm = Normalize(vmin = -1, vmax = 1), transOffset = ax.transData, array=M.ravel(),**kwargs)
    ax.add_collection(ec)
    if isinstance(data, pd.DataFrame):
        ax.set_xticks(np.arange(M.shape[1]))
        ax.set_xticklabels(data.columns, rotation = 90)
        ax.set_yticks(np.arange(M.shape[0]))
        ax.set_yticklabels(data.index)
def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    sp500_px = pd.read_csv(folder + "sp500_data.csv", index_col=0)
    sp500_sym = pd.read_csv(folder + "sp500_sectors.csv")
    # etfs = sp500_px.loc[sp500_px.index > '2012-07-01', sp500_sym[sp500_sym['sector'] == 'etf']['symbol']]
    # sns.heatmap(etfs.corr(), vmin =-1, vmax =1, cmap =sns.diverging_palette(20, 220, as_cmap =True))
    fig, ax = plt.subplot(figsize = (5, 4))
    m, ax = plot_corr_ellipses(etfs.corr(), figsize = (5, 4), cmap = 'bar_r')
    cb = fig.colorbar(m, ax=ax)
    cb.set_label('Correlation coefficient')
    plt.tight_layout()
    plt.show()
if __name__ == "__main__":
    main()