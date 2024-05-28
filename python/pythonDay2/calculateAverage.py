def main():
    kor_score = [45, 23, 53, 35, 93]
    math_score = [75, 53, 72, 65, 100]
    eng_score = [57, 38, 29, 69, 48] 
    midterm_score = [kor_score, math_score, eng_score]

    student_score = [0, 0, 0, 0, 0]
    for subject in midterm_score:               #enumerate: 반복 가능한 객체(iterable)를 순회할 때 인덱스와 요소를 동시에 추출할 수 있게 해줌
        for i, score in enumerate(subject):     
            student_score[i] += score
    else:
        a, b, c, d, e = student_score
        student_average = [a/3, b/3, c/3, d/3, e/3]
        for i, student in enumerate(student_average):
            print(f"student average : {student:.2f} : {kor_score[i]}, {math_score[i]}, {eng_score[i]}")
if __name__ == "__main__":
    main()