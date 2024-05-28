def main():
    # simple list comprehension
    result = [i * 2 for i in range(100)]
    print(result)

    # filter list comprehension
    result2 = [i for i in range(100) if i % 2 == 0]
    print(result2)

    # filter list comprehension2
    result3 = [i if i % 2 == 0 else 'odd' for i in range(10)]
    print(result3)

    # nested list comprehension(중첩반복문)
    result4 = [i + j for i in range(2) for j in range(3)]
    print(result4)

    # two_dimensional list(이차원 리스트)
    result5 = [[i + j for i in range(2)] for j in range(3)]
    print(result5)
    result5 = [[i + j] for i in range(2) for j in range(3)]
    print(result5)
if __name__ == "__main__":
    main()