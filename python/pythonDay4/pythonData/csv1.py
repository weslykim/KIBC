import os

def main():
    line_counter = 0
    data_header = []
    customer_list = []
    filename = "/home/ubnt/Desktop/python/pythonDay4/pythonData/customers.csv"
    with open(filename, "r") as f:
        while data := f.readline():
            if line_counter == 0:
                data_header =data.split(",")
            else:
                customer_list.append(data.split(","))
            line_counter += 1
    print(f"Header : {data_header}")
    for customer in customer_list:
        print(customer)
if __name__ == "__main__":
    main()