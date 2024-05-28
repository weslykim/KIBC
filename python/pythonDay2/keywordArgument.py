def print_something(my_name, your_name):
    print(f"Hello {your_name}, my name is {my_name}")

def print_something2(my_name, your_name = "TeamLaB"):
    print(f"Hello {your_name}, my name is {my_name}")


def main():
    print_something("seongchul", "TeamLaB")
    print_something(your_name = "TeamLaB", my_name ="seongchul")
    print()
    print_something2("seongchul", "BINDSOFT")
    print_something2("seongchul")




if __name__ == "__main__":
    main()