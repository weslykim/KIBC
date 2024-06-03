import pandas as pd
import numpy as np
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score
from sklearn.tree import DecisionTreeClassifier

#plotDecisionTree dbma packages
from dmba import plotDecisionTree
import matplotlib.pyplot as plt

def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/STATICS_DAY6/pytorch/data/"
    dataset : pd.DataFrame = pd.read_csv(folder + "train.csv", index_col = "PassengerId")
    print(dataset.head())
    print(dataset.info())
    df = dataset[['Pclass', 'Sex', 'Age', 'SibSp', 'Parch', 'Fare', 'Survived']]
    df['Sex'] = df['Sex'].map({'male': 0, 'female': 1})
    print(df.head())
    print(df.info())

    df.dropna(inplace = True)
    print(df.head())
    print(df.info())
 
    X = df.iloc[:, :-1].values
    Y = df.iloc[:, -1].values
    X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size = 0.2, random_state = 0)

    model = DecisionTreeClassifier()
    model.fit(X_train, Y_train)

    Y_pred = model.predict(X_test)
    accurate = accuracy_score(Y_test, Y_pred)
    print(f"Accuracy : {accurate}") # 0.7877094972067039 (accurate)
    plotDecisionTree(model, feature_names = ['Pclass', 'Sex', 'Age', 'SibSp', 'Parch', 'Fare'], class_names = ['Died', 'Survived'])
    plt.show()


    # # 정규화
    # scaler = StandardScaler()
    # X_train = scaler.fit_transform(X_train)
    # X_test = scaler.fit_transform(X_test)

    # # ML model 만들기 및 학습
    # knn = KNeighborsClassifier(n_neighbors = 5)
    # knn.fit(X_train, Y_train)

    # # 예측, 정확도 출력
    # Y_pred = knn.predict(X_test)
    # accuracy_score(Y_valid, Y_pred)
    # print(accuracy_score(Y_valid, Y_pred))

    # # fold 별로 나누기
    # k = 10
    # acc_array = np.zeros(k)
    # for k in np.arange(1, k + 1):
    #     knn = KNeighborsClassifier(n_neighbors = k).fit(X_train, Y_train)
    #     Y_pred = knn.predict(X_test)
    #     acc_array[k - 1] = accuracy_score(Y_valid, Y_pred)
    # print(list(acc_array))

if __name__ == "__main__":
    main()