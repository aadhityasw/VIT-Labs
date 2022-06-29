set serveroutput on
declare
	a integer(5);
	b integer(5);
	c integer(5);
	d integer(5);
begin
	a:=&a;
	c:=0;
	d:=a;
	while a>0 loop
		b:=mod(a,10);
		a:=floor(a/10);
		c:=c+power(b,3);
	end loop;
	if c=d
	then
		dbms_output.put_line('Amstrong');
	else
		dbms_output.put_line('Not Amstrong');
	end if;
end;
/
