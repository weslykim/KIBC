import numpy as np
import matplotlib.pyplot as plt

def f(x):
    return x ** 2
def main():
    x = np.arange(-10, 11, 1)
    f_x = x **2
    plt.plot(x, f_x)
    plt.show()

    x_new = 10
    derivative = []
    y = []
    learning_rate = 0.1
    for i in range(100):
        old_value = x_new
        derivative.append(old_value - learning_rate * 2 * old_value)
        x_new = old_value - learning_rate * 2 * old_value
        y.append(f(x_new))
    plt.plot(x, f_x)
    plt.scatter(derivative, y)
    plt.xlim([-10, 10])
    plt.show()


if __name__ == "__main__":
    main()