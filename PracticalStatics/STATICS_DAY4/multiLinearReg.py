from sklearn.linear_model import LinearRegression
import pandas as pd
import matplotlib.pyplot as plt
import numpy as np

def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    house = pd.read_csv(folder + "house_sales.csv", sep = '\t')
    print(house.head())
    print(house.info())
    subset = ['AdjSalePrice', 'SqFtTotLiving', 'SqFtLot', 'Bathrooms', 'Bedrooms', 'BldgGrade']
    outcome = 'AdjSalePrice'
    predictors = ['SqFtTotLiving', 'SqFtLot', 'Bathrooms', 'Bedrooms', 'BldgGrade']
    house_lm = LinearRegression()
    house_lm.fit(house[predictors], house[outcome])
    print(f"intercept : {house_lm.intercept_:.3f}")     # 핵심 훈련코드
    print(f"Coefficient : ")
    for name, coef in zip(predictors, house_lm.coef_):
        print(f"\t{name} : {coef:.3f}")
    regidue = house[outcome] - house_lm.predict(house[predictors]) # 예측코드
    print(f"residuals mean: {regidue.mean():.3f}")
    print(f"residuals std : {regidue.std():.3f}")
    print(f"residuals : {regidue}")    
    test_data = pd.Series([2500, 5000, 3, 4, 7], index = predictors)
    print(house_lm.predict(([test_data])))   #type: ignore
    

if __name__ == "__main__":
    main()