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

        2024.2.29
        ubuntu에서 visualcode로 넘어갈때
        makefile을 사용하여 파일을 만듬
        make에 사용하는 명령어 기본문법
        여러개 명령어를 특정하여 등록
        연속실행 명령어, 생략 가능 명령어, 변수 사용
         