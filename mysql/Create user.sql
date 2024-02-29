use mysql;
select host, user from user;

create user 'host'@'%' identified by '0000';
grant all privileges on *.* to 'host'@'%';
flush privileges;