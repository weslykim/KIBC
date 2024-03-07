# kuIotBigdataClass


---
## 2024-02-22
---

- instruction
-gitHub sign up.
-gitHub create repository
-ubuntu hangul setting.
VsCode install
git install
```shell
sudo apt-get install git
git clone https://github.com/weslykim/kuIotBigdataClass.git
```
-sql workbench install - windows
-MySQL DBMS install - windows
-sql workbench intall - ubuntu
-vscode mysql extension install
-Chapter01. database gaeron
-chapter03. SQL basic
    -create database
    -create databases 3table
        -bookid
        -bookname
        -publisher
        -price
    -insert dater into database
    create user and grant privileges
    create testDB in windows client
---
    ##2024-02-23
---

-mysql ubuntu 문제 해결
-user 를 새로 만들어서 권한을 주어 봤지만 해결되지 않음.
-권한 설정 및 user create
    -'ALTER USER 'root'@'localhost' IDENTIFIED WITH mysql_native_password BY '0000';' 명령어 사용
 - 새로운 유저를 만들때 mysql_native_password 를 사용하도록 설정
 - 우분투 myworkbench 에서 코드를 작성하고 vscode에서 git에 연동
    -추가한 파일;
        -create _database.sql
        -create_table.sql
        -insert_data.sql법
        -create_user.sql
        -select1.sql
        -count(*)움
      -3자 내용 추가
        - 셀렉트 사용 방법
        - group by 165까지 진행
        chapter2 이론
        ubuntu에서 windows데이터베이스 접속방법 진행
        외부ip 접근 가능한 user 생성
        방화벽 전체포트 열기
        임의의 데이터 넣고 윈도우에서 확인
        거꾸로 winndows 데이터베이스 접속방법 진행(ip주소가 달라서 실패)
        외부 ip 접근 가능한 user 생성
        방화벽 전체포트 3306 포트 열기
        임의의 데이터 넣고 우분투에서 확인
        데이터 정의어,조작어,제어어를 배움

        ##2024-2-29
        ubuntu에서 visualcode로 넘어갈때
        makefile을 사용하여 파일을 만듬
        make에 사용하는 명령어 기본문법
        여러개 명령어를 특정하여 등록
        연속실행 명령어, 생략 가능 명령어, 변수 사용
        select gruop by 사용
        order by 사용
        조인 연산 left outer join, left join, right join, left inner join을 배움
        부속질의 배움(중복사용)
        집합연산 배움
        ->합집합 차집합 교집합
         exists 배움(상관 부속질의문)
         데이터 정의어 배움
         ->create문(테이블 구성및 속성과 속성에 관한 제약 정의 및 기본키 외래키 정의)
         {}-> 반복가능 , []-> 선택적사용, |-> 1개선택, <>-> 해당되는 문법 사항이 있음
         not null-> null값을 허용하지않음, default-> 기본값 설정
         primary key-> 기본키 설정, foreign key->외래키 지정
         on delete-> 투플 삭제(cascade, set null), check-> 값에 대한 조건 부여
         ->alter문 배운(생성된 테이블의 속성과 그에대한 제약 변경 및 기본키 외래키 변경)
         add-> 속성추가, drop-> 속성삭제, modify-> 속성타입변경
        drop 문 배움(테이블을 삭제)
        insert문 배움(새로운 투플을 데이터의 삽입 into와 value를 사용)
        update문 배움(특정 속성값을 수정 set를 사용)
        delete문 배움(투플을 삭제 from을 사용)
        sql내장함수를 배움(select절 where절 update절에 사용가능)
        숫자함수를 배움(ABS,Round)
        문자함수를 배움(Replace, char_length, length,substr)
        날짜 시간함수를 배움(adddate,str_to_date,date_format)

        ##2024-03-04
    [C 프로그래밍 README](./C_src/Readme.md)

        ##2024-03-07
        NULL 값 처리
        부속질의
        중첩질의({where} 비교연산자 in, not in연산자,all some/any(한정 연산자)
        exists, not exists)
        스칼라 부속질의(select)
        인라인 뷰- from 부속질의
        뷰 만들기(create view)
        뷰 수정하기(create or replace view)
        뷰 삭제하기(drop view)
        인덱스 개념과 특징 mysql에서의 인덱스 종류 및 개념
        인덱스 만들기(create index 뭐시기 on 테이블명
        (테이블구성요소))
        인덱스 재구성하기(analyze table 테이블명)
        인덱스 삭제하기(drop index 인덱스명 on 테이블명)
        데이터베이스 프로그래밍의 개념 및 방법
        (sql전용언어 사용, 일반프로그래밍 언어를 sql의 삽입하여 사용)
        (웹 프로그래밍 언어에 sql삽입, 4GL(4세대 언어))
        저장 프로그램(데이터베이스 응용프로그램을 작성하는데 사용하는 sql전용언어)
        프로시져(sql쿼리아 제어문의 집합으로 구성된 프로그램 단위) 만들기(create procedure)
        직접입력 or stored procedure 마우스 오른쪽클릭으로 생성시켜 만들기
        삽입작업을 하는 프로시져(InsertBook)
        제어문을 사용하는 프로시저(BookInsertOrUpdate)
        결과를 반환하는 프로시져(Averageprice)
        커서를 사용하는 프로시져(Interest)
        트리거(데이터의 변경문이 실행될때 자동으로 같이 실행되는 프로시져)
        사용자 정의함수(입력된 값을 가공하여 결과값을 되돌려주는 함수)