# 미완성코드

from LinearRSGDTest import LinearRegressionSGD
import numpy as np
import pandas as pd

def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    df = pd.read_csv(folder + "house_sales.csv", sep = "\t")

    predictros = ["SqFtLot", "SqFtTotLiving", "YrBuilt"]
    target = "SalePrice"
    print(df.head())
    print(df.info())
    X = df[predictros].values.reshape(-1, 1)
    Y = df[target].values

    gd_lr = LinearRegressionSGD(eta0 = 0.001, epochs = 10000, batch_size = 1, shuffle = False)
    bgd_lr = LinearRegressionSGD(eta0 = 0.001, epochs = 10000, batch_size = len(X), shuffle = False)
    sgd_lr = LinearRegressionSGD(eta0 = 0.001, epochs = 10000, batch_size = 1, shuffle = True)
    msgd_lr = LinearRegressionSGD(eta0 = 0.001, epochs = 10000, batch_size = len(X), shuffle = True)


if __name__ == "__main__":
    main()