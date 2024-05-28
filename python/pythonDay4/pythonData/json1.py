import json

def main():
    folder = "/home/ubnt/Desktop/python/pythonDay4/pythonData/"
    with open(folder + "json_example.json", "r", encoding= "utf8") as f:
        contents = f.read()
        json_data = json.loads(contents)
    print(json_data)

    for data in json_data['employee']:
        print(data['firstName'], end=" ")
        print(data['lastName'])
if __name__ == "__main__":
    main()