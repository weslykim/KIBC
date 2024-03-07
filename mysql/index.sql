use madangdb;
create index ix_book_1 on Book(bookname);
create index ix_book_2 on Book(publisher, price);

select * from Book
where publisher= '대한미디어' and price >= 30000;

drop index ix_book_1 on Book;
analyze table Book;

