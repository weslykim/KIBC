import numpy as np
import pandas as pd
import matplotlib.pyplot as plt

class LinearRegressionSGD(object):
    def __init__(self,fit_intercept = True, copy_X = True, eta0 = 0.01, epochs = 1000, batch_size = 1, weight_decay = 0, shuffle = True):
        self.fit_intercept = fit_intercept
        self.copy_X  = copy_X 
        self.eta0 = eta0
        self.epochs = epochs
        self.batch_size = batch_size
        self.weight_decay = weight_decay
        self._is_SGD = shuffle

        self._cost_history = []
        self._coef = None
        self._intercept = None
        self._new_X = None
        self._weight_history = None

    def gradient(self, X, Y, theta):
        return X.T.dot(self.hypothesis_function(X, theta) - Y) / len(X)
    
    def hypothesis_function(self, X, theta):
        return X.dot(theta).reshape(-1, 1)
    
    def cost(self, h, Y):
        return 1 / (2 * len(y)) * np.sum((h - y).flatten() ** 2)

    def fit(self, X, Y):
        self._new_X = np.array(X)
        Y = Y.reshape(-1, 1)

        if self.fit_intercept:
            intercept_vector = np.ones([len(self._new_X), 1])
            self._new_X = np.concatenate((intercept_vector, self._new_X), axis = 1)

        theta_init = np.random.normal(0.1, self._new_X.shape[1])
        self._w_history = [theta_init]
        self._cost_history = [self.cost(self.hypothesis_function(self._new_X, theta_init), Y)]

        theta = theta_init

        for epoch in range(self.epochs):
            X_copy = np.copy(self._new_X)
            if self._is_SGD:
                np.random.shuffle(X_copy)

            batch = len(X_copy) // self.batch_size
            for batch_count in range(batch):
                X_batch = np.copy(X_copy[batch_count * self.batch_size : (batch_count + 1) * self.batch_size])
                gradient = self.gradient(X_batch, Y, theta).flatten()
                theta = theta - self.eta0 * gradient
                
            if epoch % 100 == 0:
                self._w_history.append(theta)   # type: ignore
                cost = self.cost(self.hypothesis_function(self._new_X, theta), Y)
                self._cost_history.append(cost)
            self._eta0 = self._eta0 * self.weight_decay
        
        if self.fit_intercept:
            self._intercept = theta[0]  # type: ignore
            self._coef = theta[1:]  # type: ignore
        else:
            self._coef = theta
        
    def predict(self, X):
        test_X = np.array(X)
        if self.fit_intercept:
            intercept_vector = np.ones([len(test_X), 1])
            test_X = np.concatenate((intercept_vector, test_X), axis = 1)
            weights = np.concatenate(([self._intercept], self._coef), axis = 0) # type : ignore
        else:
            weights = self._coef
        return test_X.dot(weights)  # type : ignore

def main():
    pass


if __name__ == "__main__":
    main()