use madangdb;

create view vw_Book
as select * from Book
where bookname like "%축구%";

select * from vw_Book;

-- 4-20
create view vw_Customer
as select * from Customer
where address like '%대한민국%';
select * from vw_Customer;

-- 4-21 example
create view vw_Orders(orderid, custid, name, bookid, bookname, saleprice, orderdate)
as select od.orderid, od.custid, cs.name,
		od.bookid, bk.bookname, od.saleprice, od.orderdate
	from Orders od, Customer cs, Book bk
where od.custid = cs.custid and od.bookid = bk.bookid;
select orderid, bookname, saleprice
from vw_Orders
where name = '김연아';

-- 4-22 example
select * from vw_Customer;
create or replace view vw_Customer (custid, name, address)
as select custid, name, address
from Customer
where address like '%영국%';

-- 4-23 exxample
drop view vw_Customer;
select * from vw_Customer;

insert into vw_Customer value (6, '김진세', '영국 오송');
insert into Customer value(7, '박정석', '영국 대전', '000-0000-0101');
select * from Customer;