import pandas as pd
import numpy as np
from statsmodels import robust
import matplotlib.pyplot as plt

def main():
    folder = "/home/ubnt/Desktop/PracticalStatics/data/"
    state = pd.read_csv(folder + "state.csv")
    print(f"미국주의 인구 표준편차는 {state['Population'].std()}")
    iqr = state["Population"].quantile(0.75) - state["Population"].quantile(0.25)
    print(f"미국 주의 사분위범위(iqr)는 {iqr} 이다.")
    mad = robust.scale.mad(state["Population"])
    print(f"미국 주의 MAD는 {mad} 이다.")

    plt.boxplot(state["Population"])
    plt.show()
    # state["Population"].plot.box()
if __name__ == "__main__":
    main()