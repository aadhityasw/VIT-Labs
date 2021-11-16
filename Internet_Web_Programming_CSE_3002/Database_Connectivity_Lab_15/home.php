<?php
    $servername = "localhost";
    $username = "root";
    $password = "";

    $conn = new mysqli($servername, $username, $password, "iwp");

    if($conn->connect_error)
    {
        die($conn->connect_error);
    }
    echo "Connected successfully";

    /*
    $sql = "CREATE TABLE Hackathon (regno INT(6) UNSIGNED PRIMARY KEY, fullname VARCHAR(50) NOT NULL, email VARCHAR(50))";
    if (mysqli_query($conn, $sql)) 
    {
        echo "Table created successfully";
    } 
    else 
    {
        echo "Error creating table: " . mysqli_error($conn);
    }*/

    if ($_SERVER['REQUEST_METHOD'] == 'POST')
    {
        $names = $_POST["name"];
        $regno = $_POST["regno"];
        $email = $_POST["email"];
        $sql = "INSERT INTO Hackathon(regno, fullname, email) VALUES('$regno', '$names', '$email')";
        if (mysqli_query($conn, $sql)) 
        {
            echo "Data Entered successfully<br>";
        } 
        else 
        {
            echo "Error Entering Data: " . mysqli_error($conn);
        }
    }
?>