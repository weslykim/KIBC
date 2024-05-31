from sklearn.naive_bayes import MultinomialNB
import statsmodels as sm
import pandas as pd
import numpy as np
#LinearDiscriminantAnalysis
from sklearn.discriminant_analysis import LinearDiscriminantAnalysis
def main():
    folder = "/home/ubnt/KIBC/PracticalStatics/data/"
    loan3000 : pd.DataFrame = pd.read_csv(folder + "loan3000.csv")
    print(loan3000.head())
    print(loan3000.info())

    # convert to categorical
    loan3000['outcome'] = loan3000['outcome'].astype('category')
    predicitors = ['borrower_score', 'payment_inc_ratio']
    outcome = 'outcome'

    X = loan3000[predicitors]
    Y = loan3000[outcome]
    loan_lda = LinearDiscriminantAnalysis()
    loan_lda.fit(X, Y)
    result = pd.DataFrame(loan_lda.scalings_, index = X.columns) # type: ignore
    print(result)
    print(f"Intercept : {loan_lda.intercept_}")
    for name, coef in zip(predicitors, loan_lda.coef_[0]):
        print(f"\t{name} : {coef:.3f}")
    pred = pd.DataFrame(loan_lda.predict_proba(loan3000[predicitors]), columns = loan_lda.classes_) # type: ignore
    print(pred.head())

if __name__ == "__main__":
    main()