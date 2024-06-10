import numpy as np
from sklearn.model_selection import train_test_split

def main():
    X, Y = np.arange(10).reshape((5, 2)), range(5)
    print(f"X : {X}")
    print(f"Y : {Y}")
    X_train, X_test, Y_train, Y_test = train_test_split(X, Y, test_size = 0.33, random_state = 42)
    print(f"X_train : {X_train}")
    print(f"X_test : {X_test}")
    print(f"Y_train : {Y_train}")
    print(f"Y_test : {Y_test}")


if __name__ == "__main__":
    main()