def main():
    sentence = "I love you"
    reverse_sentence = ""
    for char in sentence:
        reverse_sentence = char + reverse_sentence
    print(reverse_sentence)

    print(sentence[::-1]) #4번에서 6번문은 8번문과 결과값이 같게 나온다.






if __name__ == "__main__":
    main()