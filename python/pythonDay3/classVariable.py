class Cookie:
    number = 0          #클래스 변수
    def __init__(self, size):
        self.size = size                    #이때 size를 인스턴스변수라고 한다.
        Cookie.number += 1
    
    @classmethod
    def reset(cls):
        cls.number = 0
        print("쿠키의 갯수를 초기화 하였습니다.")


def main():
    cookie1 = Cookie(10)
    cookie2 = Cookie(20)
    Cookie.reset()
    for _ in range(100):
        Cookie(30)
    print(f"쿠키의개수 : {Cookie.number}")


if __name__ == "__main__":
    main()