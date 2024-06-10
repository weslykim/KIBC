import pandas as pd
import numpy as np

def main():
    raw_data = {'first_name': ['Jason', np.nan, 'Tina', 'Jake', 'Amy'],
                'last_name': ['Miller', np.nan, 'Ali', 'Milner', 'Cooze'],
                'age': [42, np.nan, 36, 24, 73],
                'sex' : ['m', np.nan, 'f', 'm', 'f'],
                'preTestScore' : [4, np.nan, np.nan, 2, 3],
                'postTestScore': [25, np.nan, np.nan, 62, 70]}
    
    df = pd.DataFrame(raw_data)
    # df['preTestScore'].fillna(df['preTestScore'].mean(), inplace = True)
    # print(df.groupby(['sex'])['postTestScore'].transform('mean'))
    # df.iloc[1, 3] = 'm'
    # df['postTestScore'].fillna(df.groupby(['sex'])['postTestScore'].transform('mean'), inplace = True)

    # without transform
    print(df.groupby(['sex'])['postTestScore'].mean())
    sex_group = df.groupby('sex')['postTestScore'].mean()
    new_df = df.merge(sex_group, how = 'left', on = 'sex')
    print(new_df.head())
    new_df['postTestScore_x'].fillna(new_df['postTestScore_y'], inplace = True)
    new_df.drop('postTestScore_y', axis = 1, inplace = True)
    # rename of postTestScore x to postTestScore
    new_df.rename(columns = {'postTestScore_x': 'postTestScore'}, inplace = True)
    print(new_df)


if __name__ == '__main__':
    main()