import matplotlib.pyplot as plt
import numpy as np

def main():
    X1 = np.linspace(-10, 10, 1000)
    Y1 = np.sin(X1)
    Y2 = np.cos(X1)
    Y3 = np.tan(X1)
    Y4 = np.exp(X1)
    Y5 = np.tanh(X1)
    ax1 = plt.subplots(321)
    plt.plot(X1, Y1)
    ax2 = plt.subplots(322)
    plt.plot(X1, Y2)
    ax3 = plt.subplots(312)
    plt.plot(X1, Y3)
    ax4 = plt.subplot(325)
    plt.plot(X1, Y4)
    ax5 = plt.subplot(326)
    plt.plot(X1, Y5)
    plt.show()


if __name__ == "__main__":
    main()