import numpy as np

def main():
    # 2차원 리스트 생성
    li1 = [[1, 2, 3, 4],[1, 2, 3, 4],[1, 2, 3, 4]]
    # 2차원 리스트를 numpy 배열로 변환
    test_array = np.array(li1, dtype=np.uint8)
    print(test_array.shape)
    print(test_array)
    test_array2 = test_array.reshape((2, 6))
    print(test_array2.shape)
    print(test_array2)
    li2 = [i for i in range(1000)]
    tensor_array = np.array(li2, dtype=np.int64)
    tensor_array = tensor_array.reshape((10, 2, 5, 10))
    print(tensor_array)

    # flatten = reshape(-1)과 같은 효과를 가진다.(배열을 순서대로 펼친다.)
    print(tensor_array.flatten())
    
if __name__ == "__main__":
    main()