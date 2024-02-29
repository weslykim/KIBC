use madangdb;
insert into 	Book(bookid, bookname, publisher, price)
			value (13, "스포츠 의학", "한솔의학서적", 90000);
select * from Book;
-- 3-45 example
insert into Book(bookid, bookname, publisher) 
values (14, "스포츠 의학", "한솥의학서적");
select * from Book;

create table Imported_Book(
	bookid integer primary key,
    bookname varchar(40),
    publisher varchar(40),
    price integer
    );
select * from Imported_Book;
-- 3-46 example
insert into Book(bookid, bookname, price, publisher)
		select bookid, bookname, price, publisher
        from Imported_Book;
-- 3-47 example
set SQL_SAFE_UPDATES=0;
update Customer
set address = "대한민국 부산"
where custid=5;
select * from Customer;

-- 3-48 example
select * from Book;
update Book
set 	publisher = (select publisher from Imported_book
where bookid = 10)
where bookid = 14;

-- 3-49 example
delete from Book
where bookid = 11;
select * from Book;

-- 3-50 example
delete from Customer;

alter table Orders drop foreign key(custid) references Customer(custid);
        