def main():
    student_info = {20140012:'Seongchul', 20140019:'Jiyeong', 20140058:'Jaehong'}
    # 자료 확인
    print(student_info[20140012])
    
    # 추가
    student_info[20140013] = 'Sugil'
    for key in student_info:
        print(key, student_info[key])
    print(type(student_info))

    # 메소드 key(), value(), items()
    print(student_info.keys())
    print(student_info.values())
    print(student_info.items())
    for key, value in student_info.items():
        print(key, value)
          
if __name__ == "__main__":
    main()