def main():
    for looper in {1, 2, 3, 4, 5}:
        print("hello", looper)
        print("world")

    
    for i in range(100):
        print("hello", i, end = " ")
    
    for i in range(0, 100, 2):
        print("hello", i, end = " ")

    for i in 'abcdefg': # 큰따옴표를 쓰든 작은따옴표를 쓰든 같이 동작한다. 똑같이 배열로 인식한다.
        print(i)






if __name__ == "__main__":
    main()