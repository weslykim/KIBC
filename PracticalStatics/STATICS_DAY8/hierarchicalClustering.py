import pandas as pd
from sklearn.cluster import KMeans
import matplotlib.pyplot as plt
from collections import Counter
#import linkage
from scipy.cluster.hierarchy import linkage
#import dendrogram, fcluster
from scipy.cluster.hierarchy import dendrogram, fcluster

def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    sp500_px = pd.read_csv(folder + "sp500_data.csv", index_col = 0)
    syms = sorted(['AAPL', 'MSFT', 'CSCO', 'INTC', 'CVX', 'XOM', 'SLB', 'COP',
                  'JPM', 'WFC', 'USB', 'AXP', 'WMT', 'TGT', 'HD', 'COST'])
    df = sp500_px.loc[sp500_px.index >= '2011-01-01', syms].transpose()
    kmeans = KMeans(n_clusters = 5, n_init = 'auto').fit(df)

    Z = linkage(df, method = 'ward')
    print(Z)
    print(Z.shape)

    # dendrogram
    fig, ax = plt.subplots()
    dendrogram(Z, labels = list(df.index), color_threshold = 0, ax = ax)
    plt.xticks(rotation = 90)
    ax.set_ylabel('Distance')

    #cut dendrogram
    memb = fcluster(Z, 4, criterion = 'maxclust')
    memb = pd.Series(memb, index = df.index)
    for key, item in memb.groupby(memb):
        print(f"{key} : {', '.join(item.index)}")
    plt.show()


if __name__ == "__main__":
    main()