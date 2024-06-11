import pandas as pd
import numpy as np
from sklearn.preprocessing import MinMaxScaler
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression, Lasso, Ridge, SGDRegressor
from sklearn.metrics import mean_squared_error, r2_score, mean_absolute_error
def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    df = pd.read_csv(folder + "boston.csv")
    
    print(df.info())
    print(df.keys())
    data = df.drop(columns = ["MEDV"])
    target = df["MEDV"]
    x_data = data.to_numpy()
    y_data = target.to_numpy().reshape(-1, 1)
    print(y_data.shape)

    minmax_scale = MinMaxScaler(feature_range=(0, 5)).fit(x_data)
    x_scaled_data = minmax_scale.transform(x_data)

    print(x_scaled_data)

    X_train, X_test, Y_train, Y_test = train_test_split(x_scaled_data, y_data, test_size = 0.33)

    print(X_train.shape, X_test.shape, Y_train.shape, Y_test.shape)

    model = LinearRegression(fit_intercept = True, copy_X = True, n_jobs = 6)
    lasso_model = Lasso(alpha = 0.1, fit_intercept = True, copy_X = True)
    ridge_model = Ridge(alpha = 0.1, fit_intercept = True, copy_X = True)
    sgd_model = SGDRegressor(penalty = "l2", alpha = 0.1, max_iter = 1000, tol = 0.001, eta0 = 0.01)

    modelnames = ["Linear", "Lasso", "Ridge", "SGD"]
    models = []
    models.append(model)
    models.append(lasso_model)
    models.append(ridge_model)
    models.append(sgd_model)

    model.fit(X_train, Y_train)
    lasso_model.fit(X_train, Y_train)
    ridge_model.fit(X_train, Y_train)
    sgd_model.fit(X_train, Y_train)
    
    for m, modelName in zip(models, modelnames):
        print(f"{modelName} : Coefficients : {m.coef_}")
    print("-------------")
    for m, modelName in zip(models, modelnames):
        print(f"{modelName} : Intercept : {m.intercept_}")

    print(model.predict(x_data[:5]))
    print(x_data[:5].dot(model.coef_.T) + model.intercept_)

    y_true = Y_test.copy()
    y_hats = []

    for m in models:
        y_hats.append(m.predict(X_test))
    for y_hat, modelName in zip(y_hats, modelnames):
        print(f"{modelName} R2 Score:{r2_score(y_true, y_hat)}")
        print(f"{modelName} MSE:{mean_squared_error(y_true, y_hat)}")
        print(f"{modelName} RMSE:{np.sqrt(mean_squared_error(y_true, y_hat))}")
        print(f"{modelName} MAE:{mean_absolute_error(y_true, y_hat)}")
    
if __name__ == "__main__":
    main()