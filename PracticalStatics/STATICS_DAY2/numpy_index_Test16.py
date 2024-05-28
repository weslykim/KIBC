import numpy as np

def main():
    Z = np.array([6, 6, 6, 4, 7, 9, 1, 8, 8, 4])
    Z[Z.argsort()[:5]] = 0
    print(Z)


if __name__ == "__main__":
    main()