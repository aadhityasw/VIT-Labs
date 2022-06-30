Set serveroutput on;
DECLARE
 	 cursor c1 is select * from department;
 	 cursor c2 is select * from employee;
  	s employee.salary%type;

BEGIN
	for i in c1 	loop
   		s:=0;
		dbms_output.put_line ('----------------------------------------------');     			dbms_output.put_line ('Department is :' || i.deptno ||' Department name is:' || i.depname);
 		dbms_output.put_line ('-------------------------------------------');
  		for j in c2    loop
  			if ( i.deptno=j.deptno) then
  				 s:=s+j.salary;
   				dbms_output.put_line(j.empno|| '    '|| j.ename || '    '|| j.salary );
 			 end if;
		end loop;
		dbms_output.put_line('----------------------------------------------');
		dbms_output.put_line('Total salary is:   '|| s);
		dbms_output.put_line('----------------------------------------------');
	end loop;
END;
/
