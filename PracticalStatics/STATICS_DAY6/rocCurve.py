from unittest import result
import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import statsmodels.api as sm
import statsmodels.formula.api as smf
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import roc_curve


def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    loan_data : pd.DataFrame = pd.read_csv(folder + "loan_data.csv.gz")
    print(loan_data.head())
    print(loan_data.info())

    predictors = ['payment_inc_ratio', 'purpose_', 'home_', 'emp_len_', 'borrower_score']
    outcome = 'outcome'
    X = pd.get_dummies(loan_data[predictors], prefix='', prefix_sep='', drop_first=True)
    y = loan_data[outcome]
    print(X.head())
    print(X.T.head(20))
    print(y.head())

    logit_reg = LogisticRegression(penalty='l2', C=1e42, solver='liblinear')
    logit_reg.fit(X, y)

    pred = logit_reg.predict(X)
    pred_y = pred == 'default'
    true_y = y == 'default'

    true_pos = true_y & pred_y
    true_neg = ~true_y & ~pred_y
    false_pos = ~true_y & pred_y
    false_neg = true_y & ~pred_y

    conf_mat = pd.DataFrame([[np.sum(true_pos), np.sum(false_neg)], 
                             [np.sum(false_pos), np.sum(true_neg)]],
                             index = ['Y = default', 'Y = Paid off'],
                             columns = ['Yhat = default', 'Yhat = Paid off'])
    print(conf_mat)

    print(f"Accuracy(정확도) : {(np.sum(true_pos) + np.sum(true_neg)) / len(y)}")
    print(f"Precision(정밀도) : {np.sum(true_pos) / (np.sum(true_pos) + np.sum(false_pos))}")
    print(f"Recall(재현율) : {np.sum(true_pos) / (np.sum(true_pos) + np.sum(false_neg))}")

    fpr, tpr, thresholds = roc_curve(y, logit_reg.predict_proba(X)[:, 0], pos_label = 'default')
    roc_df = pd.DataFrame(({'recall' : tpr, 'specificity' : 1 - fpr}))
    fig = plt.figure()
    ax = fig.add_subplot()
    ax = roc_df.plot(x = 'specificity', y = 'recall', ax = ax, legend = False)
    ax.set_xlim(1, 0)
    ax.set_ylim(0, 1)
    ax.plot((1, 0), (0, 1))
    ax.set_xlabel('Specificity')
    ax.set_ylabel('Recall')
    plt.show()

if __name__ == "__main__":
    main()