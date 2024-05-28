import pandas as pd
import os

def main():
    folder = "/home/ubnt/Desktop/PracticalStatics/STATICS_DAY2/pandasTest/"
    filenames = [os.path.join(folder, filename) for filename in os.listdir(folder) if "sales" in filename]
    df_list = [pd.read_excel(filename) for filename in filenames]
    for df in df_list:
        print(df)
    
    df = pd.concat(df_list, axis=0)
    print(df)
    df.reset_index(inplace=True, drop=True)
    print(df)
    print(df_list)
    df_1, df_2, df_3 = df_list
    df = df_1._append(df_2)
    df = df._append(df_3)
    print(df)

if __name__ == "__main__":
    main()