use madangdb;
-- 3-15 example
select sum(saleprice) 총판매액 from Orders;
-- 3-16 example
select sum(saleprice) 총판매액 
from Orders
where Orders.custid=2;

select custid 김연아, saleprice 판매액
from Orders
where Orders.custid=2;
-- 3-17 example
select sum(saleprice) TOtal, avg(saleprice) Average,
	min(saleprice) Min, max(saleprice) Max
from Orders;

-- 3-18 example
select count(*) from Orders;
-- 3-21 example
select * from Customer,Orders;
select * from Customer,Orders where Customer.custid=Orders.custid;
-- 3-22 example
select * from Orders, Customer 
where Customer.custid=Orders.custid
order by Customer.custid;

select Customer.custid, name, saleprice
from Orders, Customer
where Customer.custid=Orders.custid;
-- 3-24 example
select name, SUM(saleprice)
from Orders, Customer
where Customer.custid=Orders.custid
group by name
order by name;

-- 3-25 example
select Customer.name, Book.bookname
from Customer, Orders, Book
where (Customer.custid=Orders.custid) and (Book.bookid= Orders.bookid)

-- 3-26 example
select Customer.name, Book.bookname
from Customer, Orders, Book
where (Customer.custid=Orders.custid) and (Book.bookid= Orders.bookid)
and Book.price=20000;

-- 3-27 example
select Customer.name, Orders.saleprice
from Customer left outer join Orders on Customer.custid=Orders.custid;

select Customer.name, Orders.saleprice
from Customer left join Orders on Customer.custid=Orders.custid;

select Customer.name, Orders.saleprice
from Customer right join Orders on Customer.custid=Orders.custid;

select Customer.name, Orders.saleprice
from Customer inner join Orders on Customer.custid=Orders.custid;

select Customer.name, Orders.saleprice
from Customer, Orders
where Customer.custid=Orders.custid;