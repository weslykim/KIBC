def main():
    somebody = input("Enter your name: ")
    print("Hi", somebody, "how are you today?")
    print(f"Hi {somebody} how are you today?")
    inta = int(input("Enter a number: "))
    print(inta * 3) ## 곱하기 3이 아닌 입력한숫자가 3번이 출력된다. 곱셈을 하려면 input함수 앞에 형태(int float double)를 붙여야한다.





if __name__ == "__main__":
    main()