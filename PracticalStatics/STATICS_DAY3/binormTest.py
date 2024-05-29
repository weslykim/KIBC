import scipy.stats as stats
import pandas as pd
import matplotlib.pyplot as plt
def main():
    # 이산분포
    print(stats.binom.pmf(2, n = 5, p = 0.1))
    print(stats.binom.cdf(2, n = 5, p = 0.1))
    # binom_list = []
    # for _ in range(1000):
    #     a = print(pd.Series(stats.binom.rvs(2, p = 0.1, size = 100)))
    #     binom_list.append(a[a == 1].count())
    # pd.Series(binom_list).plot.hist()
    # plt.show()
    
    # sample = stats.poisson.rvs(2, size = 100)
    # pd.Series(sample).plot.hist()
    # plt.show()
    
    # sample = stats.expon.rvs(scale = 1/0.2, size = 100)
    # pd.Series(sample).plot.hist()
    # plt.show()

    sample = stats.weibull_min.rvs(c = 1.5, scale = 5000, size = 100)
    pd.Series(sample).plot.hist()
    plt.show()


if __name__ == "__main__":
    main()