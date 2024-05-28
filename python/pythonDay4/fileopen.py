def main():
    filename = "/home/ubnt/Desktop/python/pythonDay2/yesterday.txt"
    with open(filename, "r") as f:
        cont = f.read()
    #     cont = f.readline()
    #     for c in cont:
    #         print(c, end="")
    # with open(filename, "r") as f:
    #     while con := f.readline():                  #:=은 "Walrus Operator"로, 표현식의 결과를 변수에 할당하는 동시에 그 결과를 사용할 수 있게 
    #         #해줍니다. 이를 통해 코드의 가독성과 간결성을 높일 수 있습니다.
    #         print(con)
    word_list = cont.split()
    line_list = cont.split("\n")

    print(f"총 글자의 수 {len(cont)}")
    print(f"총 단어의 수 {len(word_list)}")
    print(f"총 줄의 수 {len(line_list)}")

if __name__ == "__main__":
    main()