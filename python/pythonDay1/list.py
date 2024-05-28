def main():
    colors = ['red', 'blud', 'green','purple', 'yellow', 'black']
    number = [12, 25, 71, 3.14, 7.8235]
    print(colors)
    # print(colors[0])
    # print(colors[1])
    # print(colors[2])
    for c in colors:
        print(c)
    print(len(colors))
    # print(colors[5:8]) ## 5번째인자인 black은 포함되지만 8번째인자인 71은 포함되지 않았다.[5:8:1]과 결과가 같다.
    # print(colors[5:8:2]) ## 2칸씩 띄어서 읽는다. 7번째인자인 12를 읽지 않는다.
    # print(colors[0:11:2])
    # print(colors[::2])
    # print(colors[::-1])
    # # print(colors[13]) <-범위를 넘어서면 range에러가 발생한다.

    #리스트 연산
    total_list = colors + number
    # colors = colors + number
    colors.extend(number)   ##리스트 덧셈연산
    colors.insert(0, "orange") ##특정위치에 값을 추가한다. 0번째위치에 들어갈 인자를 추가한다. 원래있던 red는 한칸 밀린다.
    print("white" in colors)
    colors.append("white") ##새로운 값 추가
    colors.remove("white") ##인자 지우기(동일인자가 존재한다면 한개씩 지워진다.)
    colors = colors * 2 ## 곱셈 연산(인자가 숫자가 아니므로 같은 인자가 2번 순서대로 출력된다.)
    print(total_list)
    print(colors)
    print("white" in colors)
    del colors[-1] ## colors 배열 0번째인자를 지운다. 잘사용하진 않는다.
    #remove와의 차이는 remove는 리스트에 있는 인자를 지우지만 del은 인덱스 자체를 지운다. 변수도 지울수 있다.
    colors.append(number)
    print(colors)
    del colors[-1]
    print(colors)
    print(number)


if __name__ == "__main__":
    main()