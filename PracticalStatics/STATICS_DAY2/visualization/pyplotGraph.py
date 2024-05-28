import matplotlib.pyplot as plt
import numpy as np

def main():
    N = 2
    X1 = np.random.rand(512, 2)
    Y1 = np.random.rand(512, 2)
    A1 = np.random.rand(512, 2) * 150
    colors = np.random.rand(512, N, N)
    for i in range(N):
        plt.scatter(X1[:,i], Y1[:,i], s=A1[:,i], c = colors[:, i, i], alpha=0.5)
    plt.show()

if __name__ == "__main__":
    main()
