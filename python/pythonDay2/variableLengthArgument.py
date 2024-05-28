def asterisk_test(a, b, *args):
    print(a)
    print(b)
    for i in args:
        print(i)
    return a + b + sum(args)

def asterisk_test2(a, b, *args):
    x, y, *z = args
    return x, y, z


def main():
    print(asterisk_test(1, 2, 3, 4, 5))
    print(asterisk_test2(1, 2, 3, 4, 5, 6, 7, 8))
    a, b, c = asterisk_test2(1, 2, 3, 4, 5)
    print(type(c))



if __name__ == "__main__":
    main()