from sklearn.linear_model import LinearRegression
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np
from sklearn.metrics import mean_squared_error, r2_score
import statsmodels.api as sm


def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    house = pd.read_csv(folder + "house_sales.csv", sep = '\t')
    print(house.head())
    print(house.info())
    subset = ['AdjSalePrice', 'SqFtTotLiving', 'SqFtLot', 'Bathrooms', 'Bedrooms', 'BldgGrade']
    outcome = 'AdjSalePrice'
    predictors = ['SqFtTotLiving', 'SqFtLot', 'Bathrooms', 'Bedrooms', 'BldgGrade']
    house['Year'] = [int(date.split('-')[0]) for date in house['DocumentDate']]
    house['Weight'] = house['Year'] - 2005
    house_lm = LinearRegression()
    house_lm.fit(house[predictors], house[outcome], sample_weight=house['Weight'])
    print(f"intercept : {house_lm.intercept_:.3f}")     # 핵심 훈련코드
    print(f"Coefficient : ")
    for name, coef in zip(predictors, house_lm.coef_):
        print(f"\t{name} : {coef:.3f}")
 
    

if __name__ == "__main__":
    main()