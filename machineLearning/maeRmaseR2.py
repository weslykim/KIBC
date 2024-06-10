import pandas as pd
import numpy as np
from sklearn.metrics import mean_absolute_error
from sklearn.metrics import mean_squared_error
from sklearn.metrics import r2_score
from sklearn.linear_model import LinearRegression
import matplotlib.pyplot as plt

def main():
    raw_data = {'x' : [1, 2, 3, 4, 5, 6, 7, 8, 9],
                'y' : [2.1, 3.8, 6.1, 7.7, 10.5, 11.6, 13.8, 16.9, 18.3]}
    df = pd.DataFrame(raw_data)
    model = LinearRegression()
    model.fit(df[['x']], df['y'])
    y_pred = model.predict(df[['x']])
    y = df['y']

    print(f"MAE: {mean_absolute_error(df['y'], y_pred)}")
    print(f"MSE: {mean_squared_error(df['y'], y_pred)}")
    print(f"RMSE: {np.sqrt(mean_squared_error(df['y'], y_pred))}")
    print(f"R2: {r2_score(y, y_pred)}")
    
    plt.scatter(df['x'], df['y'])
    plt.plot(df['x'], y_pred)
    plt.show()
    


if __name__ == "__main__":
    main()