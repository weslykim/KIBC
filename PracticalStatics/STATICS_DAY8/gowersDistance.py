
import numpy as np
import pandas as pd
from sklearn.discriminant_analysis import StandardScaler
from sklearn.cluster import KMeans


def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    loan_data : pd.DataFrame = pd.read_csv(folder + "loan_data.csv.gz")
    predictor = ['dti', 'payment_inc_ratio', 'home_', 'purpose']

    X = loan_data[predictor]
    print(X)
    df = pd.get_dummies(X, dtype = int)
    scaler = StandardScaler()
    df0 = scaler.fit_transform(df * 1.0)
    kmean = KMeans(n_clusters = 4, random_state = 1).fit(df0)
    centers = pd.DataFrame(scaler.inverse_transform(kmean.cluster_centers_), columns = df.columns)
    print(centers)
    


if __name__ == "__main__":
    main()