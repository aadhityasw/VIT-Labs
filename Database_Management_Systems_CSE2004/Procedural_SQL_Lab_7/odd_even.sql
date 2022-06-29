set serveroutput on
declare
	num number(5);
	rem number;
begin
	num:=&num;
	rem:=mod(num,2);
	if rem=0
	then
		dbms_output.put_line('Number'||num||'is even');
	else
		dbms_output.put_line('Number'||num||'is odd');
	end if;
end;
/
