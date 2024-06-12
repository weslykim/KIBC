import pandas as pd
import numpy as np

def get_info(df):
    survived = df.loc[df["Survived"] == 1]
    not_survived = df.loc[df["Survived"] == 0]
    x = np.array([len(survived) / len(df), len(not_survived) / len(df)])
    y = np.log2(x[x != 0])
    info_all = -sum(x[x != 0] * y)
    return info_all

def get_attribute_info(df, attribute_name):
    attribute_values = df[attribute_name].unique()
    get_infos = []
    for value in attribute_values:
        split_df = df.loc[df[attribute_name] == value]
        get_infos.append(len(split_df) / len(df) * get_info(split_df))
    return sum(get_infos)

def main():
    folder = "/home/ubnt/KIBC/machineLearning/titanic/"
    df = pd.read_csv(folder + "train.csv")
    print(df["Sex"].head())

    print(get_info(df))
    male = df.loc[df["Sex"] == "male"]
    female = df.loc[df["Sex"] == "female"]
    print(f"male info : {get_info(male)}")
    print(f"female info : {get_info(female)}")

    print(get_attribute_info(df, "Sex"))

    print(get_info(df) - get_attribute_info(df, "Sex"))
    print(get_info(df) - get_attribute_info(df, "Pclass"))

if __name__ == "__main__":
    main()