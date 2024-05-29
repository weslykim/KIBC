import pandas as pd
import numpy as np
import seaborn as sns
import matplotlib.pyplot as plt

def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    loans_income = pd.read_csv(folder + "loans_income.csv").squeeze('columns')
    print(loans_income.info())
    print(loans_income.head())

    sample_data = pd.DataFrame({'income' : loans_income.sample(100), 'type' : 'Data'})
    sample_mean_05 = pd.DataFrame({'income' : [loans_income.sample(5).mean() for _ in range(1000)],'type' : 'Mean of 5'})
    sample_mean_20 = pd.DataFrame({'income' : [loans_income.sample(20).mean() for _ in range(1000)],'type' : 'Mean of 20'})
    resullt = pd.concat([sample_data, sample_mean_05, sample_mean_20])

    g = sns.FacetGrid(resullt, col = 'type', col_wrap = 1, height = 2, aspect=2)
    g.map(plt.hist, 'income', range=[0, 200000], bins = 40)
    g.set_axis_labels('Income', 'Frequency')
    g.set_titles('Distribution of {col_name}')

    # data analysis
    print(loans_income.mean())
    print(loans_income.std())

    print(sample_data.info())
    print(sample_data['income'].mean())
    print(sample_data['income'].std())

    print(sample_mean_05.head())
    print(sample_mean_05['income'].mean())
    print(sample_mean_05['income'].std())
    print(sample_mean_20['income'].mean())

    plt.show()
if __name__ == "__main__":
    main()