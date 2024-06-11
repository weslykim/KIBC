from sklearn.metrics import confusion_matrix
from sklearn.metrics import accuracy_score, recall_score, f1_score, precision_score

def main():
    y_true = [1, 0, 1, 1, 0, 1]
    y_pred = [0, 0, 1, 1, 0, 1]
    print(f"Confusion Matrix : \n{confusion_matrix(y_true, y_pred)}")
    print(f"accuracy score : \n{accuracy_score(y_true, y_pred)}")
    print(f"recall score : \n{recall_score(y_true, y_pred)}")
    print(f"f1 score : \n{f1_score(y_true, y_pred)}")
    print(f"precision score : \n{precision_score(y_true, y_pred)}")

if __name__ == "__main__":
    main()