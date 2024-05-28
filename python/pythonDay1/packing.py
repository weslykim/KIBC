def main():
    t = {1, 2, 3}
    a, b, c = t
    print(t, a, b, c)
    print(t, *t) # *은 언패킹의 의미이다. 즉 위의 값과 같아진다.

    t2 = (4, 5, 6)
    d, e, f = t2    #  ()가 생략되어있다. 즉 (d, e, f) = t2와 같다. 3번라인의 있는 식도 {}가 생략되어있다.
    print(t2, d, e, f)









if __name__ == "__main__":
    main()