import pandas as pd

def main():
    folder = "/home/ubnt/Desktop/PracticalStatics/STATICS_DAY2/pandasTest/"
    df = pd.read_excel(folder + "excel-comp-data.xlsx", engine='openpyxl')
    print(df.head())
    print(df.head(10))
    print(df.head(3).T)
    print(df.info())
    print(f"df[:3] : \n {df[:3]}")
    print(f"df['account] : \n {df['account']}")
    print(f"df[['account', 'street', 'state']] : \n {df[['account', 'street', 'state']]}")
    print(f"df[['account', 'street']][:3] : \n {df[['account', 'street']][:3]}")
    # index지정
    df.index = df['account']
    del df['account']
    print(df.head())
    print(df.info())
    print(f"df.loc[[211829], ['name', 'street']] :  {df.loc[[211829,320563], ['name', 'street']]}")
    print(f"df.iloc[:10, :3] : {df.iloc[:10, :3]}")

    # drop
    df_new = df.reset_index()
    df_drop = df_new.drop(1).head()
    df_new = df_new.drop(1, inplace=True)
    print(df_drop.head())
    print(df_new.head())
  
if __name__ == "__main__":
    main()