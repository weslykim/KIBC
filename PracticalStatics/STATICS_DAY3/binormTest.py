import scipy.stats as stats
import pandas as pd

def main():
    print(stats.binom.pmf(2, n = 5, p = 0.1))
    print(stats.binom.cdf(2, n = 5, p = 0.1))

    print(stats.poisson.rvs(2, size = 100))
    print(stats.poisson.rvs(2, size = 100).mean())
    print(stats.expon.rvs(scale = 1/0.2, size = 100).mean())
    print(stats.expon.rvs(scale = 5, size = 100).mean())
    print(stats.weibull_min.rvs(c = 1.5, scale = 5000, size = 100))

if __name__ == "__main__":
    main()