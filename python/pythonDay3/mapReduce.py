from functools import reduce

def main():
    ex = [1, 2, 3, 4, 5]
    f = lambda x:x ** 2
    for value in map(f, ex):
        print(value)

    ex1 = [1, 2, 3, 4, 5]
    ex2 = [6, 7, 8, 9, 10]
    f = lambda x, y: x + y
    for value in map(f, ex1, ex2):
        print(value)

    # reduce
    print(reduce(lambda x, y: x + y, [1, 2, 3, 4, 5]))
if __name__ == "__main__":
    main()