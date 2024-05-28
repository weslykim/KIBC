def main():
    a = str()
    text = "TEAMLAB X Inflearn"
    text.upper()
    print(text)
    a = text.upper()
    print(a)
    print(text.capitalize())
    print(text.count('A'))
    print(text.isdigit())               #isdigit 문자열에 숫자가 있는지를 확인한다 true false로 결과값이 나온다.
    li1 = text.split(sep='X')           
    print(li1)          

if __name__ == "__main__":
    main()