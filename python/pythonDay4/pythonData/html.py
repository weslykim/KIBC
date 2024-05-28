import urllib.request


def main():
    url = "http://avatars.githubsercontent.com/u/78285681?v=4"

    print("Start Download")
    frame, header = urllib.request.urlretrieve(url, "78285681?v=4")

if __name__ == "__main__":
    main()