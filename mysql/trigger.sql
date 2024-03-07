set global log_bin_trust_function_creators=on;
create table Book_log(
	bookid integer primary key,
    bookname varchar(40),
    publisher varchar(40),
    price integer);
    
    select * from Book;
    select * from Book_log;
    insert into Book values(16, '스포츠 과학 1', '이상미디어', 25000);
    select * from Book where bookid=16;
    
    select custid, orderid, saleprice, fnc_interest(saleprice) interest
    from Orders;