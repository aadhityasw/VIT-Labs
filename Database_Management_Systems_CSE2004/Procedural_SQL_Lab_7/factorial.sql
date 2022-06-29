set serveroutput on
declare
	a integer(5);
	b integer(5);
	i integer(5);
begin
	b:=1;
	a:=&a;
	for i in 1..a loop
		b:=b*i;
	end loop;
	dbms_output.put_line('Factorial = '||b);
end;
/
