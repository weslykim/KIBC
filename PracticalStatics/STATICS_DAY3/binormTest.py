import scipy.stats as stats
import pandas as pd

def main():
    print(stats.binom.pmf(2, n = 5, p = 0.1))
    print(stats.binom.cdf(2, n = 5, p = 0.1))

if __name__ == "__main__":
    main()