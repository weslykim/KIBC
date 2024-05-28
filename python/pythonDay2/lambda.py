def call_ten_times(func):
    for i in range(10):
        func()

# def print_hello():
#     print("Hello")

def main():
    # call_ten_times(print_hello)
    call_ten_times(lambda: print("hello"))

if __name__ == "__main__":
    main()