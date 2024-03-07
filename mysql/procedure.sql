-- dorepeat procedure registration
delimiter //;
create  procedure dorepeat(p1 int)
begin
		set @x= 0;
        repeat 
        set @x=@x+1;
        until @x > p1 
        end repeat;
end;
//InsertBookInsertBook
delimitter;


call dorepeat(100);
select @x;

-- InsertBook procedure registration
call Insertbook(13, '스포츠과학', '마당과학서적', 25000);
select * from Book;
-- BookInsertOrUpdate procedure registration
call BookInsertOrUpdate(15, '스포츠 즐거움', '마당과학서적' , 25000);
call BookInsertOrUpdate(15, '스포츠 즐거움', '마당과학서적' , 20000);
call BookInsertOrUpdate(16, '스포츠 즐거움', '마당과학서적' , 30000);
-- AveragePrice procedure registration
call AveragePrice(@myValue);
select @myValue;
-- Interst procedure registration
call Interest();
