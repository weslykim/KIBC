import sklearn.utils as resample
import numpy as np
import pandas as pd
def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    loans_income : pd.DataFrame = pd.read_csv(folder + "loans_income.csv").squeeze('columns')
    results = []
    for nrepeat in range(1000):
        sample = resample.resample(loans_income)
        results.append(sample.median())
    results = pd.Series(results)
    print("부트스트랩")
    print(f"원본 : {loans_income.median()}")
    print(f"바이어스 : {results.mean() - loans_income.median()}")
    print(f"표준편차 : {results.std()}")

if __name__ == "__main__":
    main()