def kwargs_test(**kwargs):
    print(kwargs)
    print(type(kwargs))
    print(f"첫 변수는 {kwargs['first']}이다.")
    print(f"두번째 변수는 {kwargs['second']}이다.")
    print(f"세번째 변수는 {kwargs['third']}이다.")
    for key, value in kwargs.items():
        print(f"Key : {key} : Value : {value}")

def kwargs_test2(*args, **kwargs):
    print(args)
    print(kwargs)

def main():
    kwargs_test(first = 3, second = 4, third = 5)
    kwargs_test2(1, 3.14, a = 2, b = 3, c = 4)


if __name__ == "__main__":
    main()