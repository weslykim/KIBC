from unittest import result
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import statsmodels.api as sm
import statsmodels.formula.api as smf
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import roc_auc_score
from sklearn.metrics import roc_curve

def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    loan_data : pd.DataFrame = pd.read_csv(folder + "loan_data.csv.gz")
    full_train_set : pd.DataFrame = pd.read_csv(folder + "full_train_set.csv.gz")
    print(loan_data.head())
    print(loan_data.info())
    print(full_train_set.head())
    print(full_train_set.info())
    pld = 100 * np.mean(full_train_set.outcome == "default")
    print(f'percentage of loans in default : \n{pld}')
    predictors = ['payment_inc_ratio', 'purpose_', 'home_', 'emp_len_', 'dti', 'revol_bal', 'revol_util']
    outcome = 'outcome'
    # X = pd.get_dummies(loan_data[predictors], prefix='', prefix_sep='', drop_first=True)
    X = pd.get_dummies(full_train_set[predictors], prefix='', prefix_sep='', drop_first=True, dtype = int)
    Y = full_train_set[outcome]
    full_model = LogisticRegression(penalty='l2', C=1e42, solver='liblinear')
    full_model.fit(X, Y)

    plpd = 100 * np.mean(full_model.predict(X) == 'default')
    print(f"percentage of loans predicted to default(weighting) : \n{plpd}")
    print(f"default / predicted : \n{pld / plpd}")

if __name__ == "__main__":
    main()