set serveroutput on;
DECLARE
	cursor c(jb number) is select sname from student where cgpa=jb; 
	em student.sname%type;
BEGIN
	open c(9);
	dbms_output.put_line(' Students with 9 points are :');
	loop
		fetch c into em;
		exit when c%notfound;
		dbms_output.put_line(em);
	end loop;
	close c;

	open c(7);
	dbms_output.put_line(' Students with 7 points are :');
	loop
		fetch c into em;
		exit when c%notfound;
		dbms_output.put_line(em);
	end loop;
	close c;
END;
/
