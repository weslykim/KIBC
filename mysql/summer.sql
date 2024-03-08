use madangdb;
create table Summer(
	sid int primary key,
    class varchar(40),
    price int);
    
insert into Summer values (100, 'JAVA', 20000);
insert into Summer values (150, 'PYTHON', 15000);
insert into Summer values (200, 'C', 10000);
insert into Summer values (250, 'JAVA', 20000);
select * from Summer;
-- example 7-1
/* C 강좌 수강료를 조회하면 10000원으로 나오나 수강생이 수강을 취소하면 C수업과 수업가격이 함께 사라진다.(삭제이상)*/
select price as 'C class 의 가격'
from Summer
where class like 'C';
-- 수강 취소
delete from Summer where sid = 200;

-- example 7-2
/*C++강좌를 삽입하는것은 상관없지만 신청한학생이 없으므로 NULL값을 넣어야하지만 집계함수사용시에 NULL값은 오류를 만든다
(삽입이상)*/
insert into Summer values (NULL, 'C++', 25000);
select count(*) '수강 인원' from Summer;
select count(sid) '수강 인원' from Summer;
 
 -- example 7-3
 /* JAVA강좌 수강료를 수정하면 정상적으로 수정되나 조건에 따라 데이터 불일치 문제가 발생할수 있다.(수정이상)*/
 set sql_safe_updates=0;
 update Summer
 set price = 15000
 where class = 'java';
 select * from Summer;
 /*-- 7-3 example에 나오는 수정이상을 해결할수 있는 방법(테이블을 둘로 나누어 과목의 가격과 수업을 듣는 수강생들의
 과목을 따로 만들어서 문제를 해결한다)*/ 
 
 create table SummerPrice(
	class varchar(20),
    price integer);
create table SummerEnroll(
	sid integer,
    class varchar(20));
    
insert into SummerPrice values ('JAVA', 20000);
insert into SummerPrice values ('PYTHON', 25000);
insert into SummerPrice values ('C', 10000);

insert into SummerEnroll values (100, 'JAVA');
insert into SummerEnroll values (150, 'PYTHON');
insert into SummerEnroll values (200, 'C');
insert into SummerEnroll values (250, 'JAVA');

select * from SummerPrice;
select * from SummerEnroll;

-- example 7-4
select price as 'C class 의 가격'
from SummerPrice
where class like 'C';
delete from SummerEnroll where sid = 200;
select * from SummerEnroll;
insert into SummerEnroll values (200, 'C');

-- example 7-5
insert into SummerPrice values ('C++', 250000);
select * from SummerPrice;
select * from SummerEnroll;

delete from SummerPrice where class like 'C++';

-- example 7-6
update SummerPrice
set price = 15000
where class like 'JAVA';
select price 'JAVA 수강료' from SummerPrice
where class like 'JAVA';
update SummerPrice
set price = 20000
where class like 'JAVA';