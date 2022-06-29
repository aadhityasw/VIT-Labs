set serveroutput on
declare
	a integer(5);
	b integer(5);
	c integer(5);
	d integer(5);
begin
	a:=&a;
	b:=a;
	c:=0;
	while b>0 loop
		c:=c*10+mod(b,10);
		b:=floor(b/10);
	end loop;
	if a=c
	then
		dbms_output.put_line('Palindrome');
	else
		dbms_output.put_line('Not Palindrome');
	end if;
end;
/
