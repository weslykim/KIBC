import numpy as np

def main():
    # 2차원 리스트 생성
    li1 = [[1, 2, 3],[1, 2, 3],[1, 2, 3]]
    # 2차원 리스트를 numpy 배열로 변환
    test_array = np.array(li1, dtype=np.uint8)
    # 배열의 데이터 타입 출력
    print(type(test_array))
    # 배열 출력
    print(test_array)
    # 배열의 데이터 타입 출력
    print(test_array.dtype)
    # 배열의 형상 출력
    print(test_array.shape)
    # 배열의 차원 수 출력
    print(test_array.ndim)
    # 배열의 요소 개수 출력
    print(test_array.size)
     # 배열의 각 행 출력
    for i in test_array:
        print(i)

if __name__ == "__main__":
    main()