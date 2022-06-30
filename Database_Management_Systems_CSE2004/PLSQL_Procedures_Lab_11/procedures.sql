
create or replace procedure updategpa(x1 number) AS
BEGIN 
UPDATE Student set cgpa=x1 where regno=101;
end;
 
create or replace function findmax
return number IS 
maxcgpa number(2):=0;
BEGIN 
select MAX(cgpa) into maxcgpa
from Student;
return maxcgpa;
end;
/
declare
c number(3);
begin
c:=findmax();
dbms_output.put_line('Max is'||c);
end;
/
