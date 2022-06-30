Set serveroutput on;
DECLARE
  emp_dept_id department.depid%TYPE;
 CURSOR cur_dept IS
  SELECT * 
  FROM department
  WHERE manid IS NOT NULL
  ORDER BY depname;
 CURSOR cur_emp IS
  SELECT * 
  FROM employee
  WHERE depid = emp_dept_id;
  
BEGIN
    FOR r_dept IN cur_dept
    LOOP
      emp_dept_id := r_dept.depid;
      DBMS_OUTPUT.PUT_LINE('----------------------------------');
      DBMS_OUTPUT.PUT_LINE('Department Name : '||r_dept.depname);
      DBMS_OUTPUT.PUT_LINE('----------------------------------');
           FOR r_emp IN cur_emp 
           LOOP
             DBMS_OUTPUT.PUT_LINE('Employee: '||r_emp.last_name);
           END LOOP;   
    END LOOP;
END;
/
