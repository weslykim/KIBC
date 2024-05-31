from sklearn.naive_bayes import MultinomialNB
import statsmodels as sm
import pandas as pd
import numpy as np
def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    loan_data : pd.DataFrame = pd.read_csv(folder + "loan_data.csv.gz")
    print(loan_data.head())
    print(loan_data.info())

   # convert to category
    loan_data['outcome'] = loan_data['outcome'].astype('category')
    loan_data['outcome'].cat.reorder_categories(['paid off', 'default'])
    loan_data['purpose'] = loan_data['purpose'].astype('category')
    loan_data['home_'] = loan_data['home_'].astype('category')
    loan_data['emp_len_'] = loan_data['emp_len_'].astype('category')

    predictors = ['purpose', 'home_', 'emp_len_']
    outcome = 'outcome'

    X = pd.get_dummies(loan_data[predictors], drop_first=True, dtype=int)
    Y = loan_data[outcome]

    naive_model = MultinomialNB(alpha = 0.01, fit_prior = True)
    naive_model.fit(X, Y)
    print(f"Classes : {naive_model.classes_}")
    print(f"Class count : {naive_model.class_count_}")
    print(f"Class log prior : {naive_model.class_log_prior_}")
    print(f"Feature count : {naive_model.feature_count_}")
    new_loan = X.loc[146:146,:]
    # new_loan = loan_data.loc[146:146,:]
    # print(new_loan, new_loan['outcome'])
    result = naive_model.predict(new_loan)
    print(result)
    print(result[0])
    probabilities = pd.DataFrame(naive_model.predict_proba(new_loan), columns = loan_data['outcome'].cat.categories)
    print(f"Probabilities : {probabilities}")

if __name__ == "__main__":
    main()