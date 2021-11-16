<html>
	<body>
		<form action="<?php $_SERVER['PHP_SELF'] ?>" method="post">
			Employee ID : <input type="text" name="empid" id="empid">
			<br>
			Leave Count : <input type="number" name="lcount" id="lcount">
			<br>
			<select name="leavetype" id="leavetype">
				<option value="casual_leave">Casual Leave</option>
				<option value="medical_leave">Medical Leave</option>
				<option value="earned_leave">Earned Leave</option>
			</select>
			<br>
			<input type="submit" value="Submit">
		</form>
		<br>
	</body>
</html>
<?php
    $conn = new mysqli("localhost", "root", "", "iwp");

    if($conn->connect_error)
    {
        die("Connection Failed" . $conn->connect_error) ;
    }
    echo "<script>console.log('Connection Successful')</script>";

    /*// Create a table;
    $sql = "SHOW TABLES";
    $result = $conn->query($sql);
	$flag = false;
    if($result->num_rows > 0)
    {
        $arr = $result->fetch_all();
        for($i=0;$i<sizeof($arr);$i++)
        {
            //echo $arr[$i][0];
            if(strcmp($arr[$i][0], "Employeeleave") == 0)
            {
				$flag = true;
            }
        }
	}
    if(! $flag)
    {
		$sql = "CREATE TABLE Employeeleave (employee_id INT(6) UNSIGNED PRIMARY KEY, casual_leave INT(3) DEFAULT 12, medical_leave INT(3) DEFAULT 12, earned_leave INT(3) DEFAULT 12);";
        if($conn->query($sql) == true)
        {
            echo "<script>console.log('Table Creation Successful')</script>";
		}
		else
		{
			echo "Error creating table: " . mysqli_error($conn);
		}
	}*/

	/*//Insertion of a few records.
	$sql = "INSERT INTO Employeeleave(employee_id) VALUES(1);";
	$sql .= "INSERT INTO Employeeleave(employee_id) VALUES(2);";
	$sql .= "INSERT INTO Employeeleave(employee_id) VALUES(3);";
	$conn->multi_query($sql);*/

	if($_SERVER["REQUEST_METHOD"] == 'POST')
	{
		$empid = intval($_POST["empid"]);
		$ltype = $_POST["leavetype"];
		$lcount = intval($_POST['lcount']);
		$sql = "SELECT $ltype from Employeeleave where (employee_id=$empid);";
		$request = $conn->query($sql);
		if(!empty($request))
		{
			//echo mysqli_fetch_array($request)[0];
			//echo gettype(mysqli_fetch_array($request)[0]);
			$val = intval(mysqli_fetch_array($request)[0]);
			if($val >= $lcount)
			{
				$val = $val - $lcount;
				$sql = "UPDATE Employeeleave set $ltype=$val WHERE employee_id=$empid;";
				$conn->query($sql);
			}
			else
			{
				echo "The number of asked leave cannot be approved.";
			}

			$sql = "SELECT * from Employeeleave where (employee_id=$empid);";
			$request = $conn->query($sql);
			$printval = "<table>
							<tr>
								<th>Employee ID</th>
								<th>Casual Leave</th>
								<th>Medical Leave</th>
								<th>Earned Leave</th>
							</tr>";
			while($row = mysqli_fetch_array($request))
			{
				$printval .= "<tr>
								<td>" . $row['employee_id'] . "</td>
								<td>" . $row['casual_leave'] . "</td>
								<td>" . $row['medical_leave'] . "</td>
								<td>" . $row['earned_leave'] . "</td>
								</tr>";
			}
			$printval .= "</table>";
			echo $printval;
		}
		else
		{
			echo "Invalid Employee ID";
		}
	}


    $conn->close();
?>