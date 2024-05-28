def main():
    a, b, c = {1, 2, 3}
    print("first: %d second: %d third: %d" % (a, b, c))
    print(f"first: {a:<6.2f} second: {b} third: {c}")
    print("first {2:} second: {1:} third: {0:}".format(a, b, c))
    print("first {2:<6.2f} second: {1:>6.2f} third: {0:6.2f}".format(a, b, c))
    
if __name__ == "__main__":
    main()