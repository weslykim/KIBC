use madangdb;
-- 3-34 example
create table NewBook(
	bookid integer,
    bookname varchar(20),
    publisher varchar(20),
    price integer);
    
drop table NewBook;
create table NewBook(
	bookid integer,
    bookname varchar(20),
    publisher varchar(20),
    price integer,
    primary key(bookid));