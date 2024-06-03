import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score

def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/STATICS_DAY6/pytorch/data/"
    names = ['sepal_length', 'sepal_width', 'petal_length', 'petal_width', 'Class']
    dataset : pd.DataFrame = pd.read_csv(folder + "iris.data", names=names)
    print(dataset.head())
    print(dataset.info())

    # predictors = ['sepal_length', 'sepal_width', 'petal_length', 'petal_width']
    # outcome = 'Class'
    # X = dataset[predictors]
    # Y = dataset[outcome]
    X = dataset.iloc[:, :-1].values
    Y = dataset.iloc[:, 4].values
    X_train, X_test, Y_train, Y_valid = train_test_split(X, Y, test_size = 0.2, random_state = 0)
    scaler = StandardScaler()

    X_train = scaler.fit_transform(X_train)
    X_test = scaler.fit_transform(X_test)

    knn = KNeighborsClassifier(n_neighbors = 5)
    knn.fit(X_train, Y_train)

    Y_pred = knn.predict(X_test)
    accuracy_score(Y_valid, Y_pred)

    print(accuracy_score(Y_valid, Y_pred))

if __name__ == "__main__":
    main()