
<?php


    // Establishing Database Connections.
    $conn = new mysqli("localhost", "root", "", "iwp");
    if($conn->connect_error)
    {
        die("Connection Failed" . $conn->connect_error) ;
    }
    echo "<script>console.log('Connection Successful')</script>";


    // Create a table;
    $sql = "SHOW TABLES";
    $result = $conn->query($sql);
	$flag = false;
    if($result->num_rows > 0)
    {
        $arr = $result->fetch_all();
        for($i=0;$i<sizeof($arr);$i++)
        {
            //echo $arr[$i][0];
            if(strcmp($arr[$i][0], "students") == 0)
            {
				$flag = true;
            }
        }
    }
    $result->free_result();
    if(! $flag)
    {
		$sql = "CREATE TABLE students (first_name CHAR(20), last_name CHAR(20), marks INT(4) DEFAULT 0);";
        if($conn->query($sql) == true)
        {
            echo "<script>console.log('Table Creation Successful')</script>";
		}
		else
		{
			echo "Error creating table: " . mysqli_error($conn);
        }
    }


    //Insertion of a few records.
	$sql = "INSERT INTO students VALUES('Soonoo', 'Jaiswal', 60);";
	$sql .= "INSERT INTO students VALUES('James', 'William', 80);";
    $sql .= "INSERT INTO students VALUES('Swati', 'Sironi', 82);";
    $sql .= "INSERT INTO students VALUES('Chetna', 'Singh', 72)";
    if ($conn->multi_query($sql))
    {
        echo "<script>console.log('Records inserted Successful')</script>";
    }
    else 
    {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }
    $conn->close();


    $conn = new mysqli("localhost", "root", "", "iwp");
    // Displaying a title
    echo "<h1> Students Table </h1>";


    // Displaying the initial table
    echo "<h3> Initial Table </h3>";
    $sql = "SELECT * FROM students ;";
    $result = $conn->query($sql);
    if(!empty($result))
	{	
        $printval = "<table>
                            <tr>
                                <th>First Name</th>
                                <th>Last Name</th>
                                <th>Marks</th>
                            </tr>";
        while($row = mysqli_fetch_array($result))
        {
            $printval .= "<tr>
                            <td>" . $row['first_name'] . "</td>
                            <td>" . $row['last_name'] . "</td>
                            <td>" . $row['marks'] . "</td>
                            </tr>";
        }
        $printval .= "</table>";
        echo $printval;
        $result->free_result();
    }else 
    {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }
    
    

    // Make necessary Changes.
    $sql = "UPDATE students SET marks=90 WHERE first_name='Swati';";
    $sql .= "UPDATE students SET last_name='Anderson' WHERE first_name='James';";
    $sql .= "DELETE FROM students WHERE first_name='Chetna';";

    if ($conn->multi_query($sql) === TRUE) 
    {
        echo "<script>console.log('Records updated Successful')</script>";
    }
    else 
    {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }
    $conn->close();
    

    $conn = new mysqli("localhost", "root", "", "iwp");
    // Displaying the final table
    echo "<h3> Final Table </h3>";
    $sql = "SELECT * FROM students ;";
    $result = $conn->query($sql);
    if(!empty($result))
	{	
        $printval = "<table>
                            <tr>
                                <th>First Name</th>
                                <th>Last Name</th>
                                <th>Marks</th>
                            </tr>";
        while($row = mysqli_fetch_array($result))
        {
            $printval .= "<tr>
                            <td>" . $row['first_name'] . "</td>
                            <td>" . $row['last_name'] . "</td>
                            <td>" . $row['marks'] . "</td>
                            </tr>";
        }
        $printval .= "</table>";
        echo $printval;
        $result->free_result();
    }else 
    {
        echo "Error: " . $sql . "<br>" . $conn->error;
    }

    // Close the Database connection.
    $conn -> close();
?>