import sklearn.utils as resample
import numpy as np
def main():
    results = []
    for nrepeat in range(1000):
        sample = np.array(resample.resample(range(10), n_samples=5))
        results.append(np.median(sample))


if __name__ == "__main__":
    main()