def main():
    # myage = int(input("Enter your age: "))
    # if (myage < 30) or (myage > 50): # if조건문에 괄호가 생략되었다. python 3부터. 그리고 조건에 성립하지 않는다고 사용할경우 !가아닌 not을 쓴다.
    #     #또한 and문과 or문을 사용할경우 &&과 ||이 아닌 and or 그대로 사용한다.
    #     print("클럽에 오신걸 환영합니다!")
    # else:
    #     print("죄송합니다. 나이가 적절하지 않습니다.")
    
    score = int(input("점수를 넣으시오: "))
    if score >= 90: grade = 'A'
    elif score >= 80: grade = 'B'
    elif score >= 70: grade = 'C'
    elif score >= 60: grade = 'D'
    else: grade = 'F'

    print(f"학점은 {grade} 입니다.")
        
    
    # 참거짓의 결과값
    # if True:
    #     print("참입니다.")
    # if False:
    #     print("거짓입니다.")
    # if 2:
    #     print("참입니다.")
    # if 0:
    #     print("거짓입니다.")
    # if 0.0:
    #     print("거짓입니다.")
    # if 0.01:
    #     print("침입니다.")
    # if "":
    #     print("거짓입니다.")
    # if "abc":
    #     print("참입니다.")
    # if None:
    #     print("거짓입니다")
    # if []:
    #     print("거짓입니다")
    # if [1, 2, 3]:
    #     print("참입니다.")



if __name__ == "__main__":
    main()