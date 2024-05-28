import csv

def main():
    filename = "/home/ubnt/Desktop/python/pythonDay4/pythonData/customers.csv"
    with open(filename, "r") as f:
        reader = csv.reader(f, delimiter=",", quotechar="'", quoting=csv.QUOTE_MINIMAL)
        for c in reader:
            print(c)

if __name__ == "__main__":
    main()