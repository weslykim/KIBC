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