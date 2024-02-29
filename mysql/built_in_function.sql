-- 4-1 example
select abs(-78), abs(+78);

-- 4-2 example
select round(4.875, 1);
select round(3.141592, 2);
select round(321.141592, -1);
select round(321.141592, 0);

-- 4-3 example
select custid "고객번호", round(avg(saleprice), -2)
from Orders
group by custid;

-- 4-4 example
select bookid, bookname, publisher, price from Book;
select bookid, replace(bookname, "야구", "농구"), publisher, price from Book;

-- 4-5 example
select bookname "제목", char_length(bookname) "문자수",
length(bookname) "바이트수"
from Book
where publisher= "굿스포츠";

-- 4-6 example
select		substr(name, 1, 1) "성", count(*) "인원"
from		Customer
group by substr(name, 1, 1);

-- 4-7 example
select * from Orders;
select orderid "주문번호", orderdate "주문일",
		adddate(orderdate, interval 10 day) "확정"
        from Orders;

-- 4-8 example
select orderid "주문번호", date_format(orderdate, "%Y-%m-%d") "주문일",
custid "고객번호", bookid "도서번호"
from	Orders
where	orderdate= str_to_date("20240707", "%Y%m%d");