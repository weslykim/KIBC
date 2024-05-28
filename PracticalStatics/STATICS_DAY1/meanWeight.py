import os
import pandas as pd
import numpy as np
from scipy import stats
import wquantiles

folder = "/home/ubnt/Desktop/PracticalStatics/data/"
def main():
    print(os.getcwd())
    state = pd.read_csv(folder + "state.csv")
    # print(type(state))
    print(state.head())
    print(f"Populatuon의 평균은 {state['Population'].mean():.2f}")
    state_trim_mean = stats.trim_mean(state["Population"], 0.1)
    print(f"Population의 절사평균은 {state_trim_mean:.2f}")
    state_median = state["Population"].median()
    print(f"Population의 중간값은 {state_median:.2f}")

    print(f"미국 살인률 평균 {state['Murder.Rate'].mean}")
    print(f"미국 살인률 절사 평균은 {stats.trim_mean(state['Murder.Rate'], 0.1)}")
    print(f"미국 살인률 중앙 값은 {state['Population'].median()}")
    meanWeights = np.average(state["Murder.Rate"], weights=state["Population"])
    print(f"미국 살인률 가중 평균(인구 가중)은 {meanWeights}이다.")
    wquan = wquantiles.median(state["Murder.Rate"],weights=state["Population"])
    print(f"미국 살인률 가중 중간값은 {wquan} 이다.")
if __name__ == "__main__":
    main()