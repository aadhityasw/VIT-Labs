create table employee(ename varchar(15),ssn_number int(5),birth_date date,address_personal varchar(20),salary int(5),department_no int(3));

create table department(department_name varchar(20),department_no int(3));

insert into employee(ename,ssn_number,birth_date,address_personal,salary,department_no) values('navi',100,'1997-12-13','chennai',5000,1),('meenaksh',101,'1987-11-13','bangalore',45000,2),('tanu',103,'1999-11-11','delhi',25000,3),('saravan',104,'1987-08-03','hyderabad',30000,3),('sanju',105,'1977-12-13','kolkota',45000,1);

insert into department(department_name,department_no) values('physics',1),('computer_science',2),('chemistry',3),('biology',4),('maths',5);

alter table department add(department_phone_num int(20));

update department set department_phone_num=987654321;

alter table department modify department_phone_num(int(10));

alter table department change column department_phone_num phno int(10);
rename table department to dept;

alter table dept drop column phno;

alter table employee add(dname varchar(10));

insert into employee(dname) select department_name from dept;
truncate table dept;

drop table dept;

select * from employee;