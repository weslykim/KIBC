select bookname, price from Book;

select price, bookname from Book;

select publisher from Book;
select distinct publisher from Book;

select * from Book;
select * from Book where price < 20000;

select * from Book where publisher in ('대한미디어', '굿스포츠');
select * from Book where publisher not in ('대한미디어', '굿스포츠');

select bookname, publisher from Book where bookname like '축구의역사';
select bookname, publisher from Book where bookname like '%축구%';

select * from Book where bookname like '_구%';

select * from Book where bookname like '%축구%' and price>=20000;
select * from BOok where(publisher = '굿스포츠') or (pulisher = '대한미디어');
select * from Book order by bookname;

select * from Orders;
select sum(saleprice) 총판매액 from Orders;
select sum(saleprice) 총매출 from Orders where custid=2;

select sum(saleprice) as 총판매액,
	avg(saleprice) as 평균값,
    min(saleprice) as 최소값,
    max(saleprice) as 최대값
    from Orders;
    
    select count(*) from Orders;
    
    select sum(saleprice) 총매출, count(*) 도서수량 from Orders group by custid;
    select sum(saleprice) 총매출, count(*) 도서수량 from Orders
    where saleprice >=8000    
    group by custid having count(*) >=2;