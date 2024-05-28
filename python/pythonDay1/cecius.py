def main():
    while True:
        try:
            celsius = input("숫자만 넣어주세요: ")
            celsius = float(celsius)
            break
        except ValueError:
            print("숫자만 입력해주세요")
            continue
    
    fahrenheit = (float(celsius) * 9/5) + 32

    print(f"섭씨온도 {celsius}는 화씨온도로 {fahrenheit}입니다.")







if __name__ == "__main__":
    main()