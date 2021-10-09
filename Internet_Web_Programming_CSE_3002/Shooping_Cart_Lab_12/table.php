<?php
    $conn = mysqli_connect("localhost", "root", "", "iwp");
    if (!$conn) 
    {
        die("Connection failed: " . mysqli_connect_error());
    }
    $item=$_GET['itemcode'];
    $price=(int)$_GET['price'];
    $amt=$_GET['amt'];
    $sql = "SELECT * FROM shop WHERE icode='$item' LIMIT 1"; $result=mysqli_query($conn,$sql);
    if (mysqli_fetch_array($result)) 
    {
        $outsql="UPDATE shop SET quant=quant+'$amt' WHERE icode='$item'"; if(mysqli_query($conn,$outsql))
        echo "<script>alert('Item amount updated!');</script>";
    } 
    else 
    {
        $insql="INSERT INTO shop (icode,cost,quant) VALUES('$item','$price','$amt')";
        if(mysqli_query($conn,$insql))
        echo "<script>alert('Item has been added to cart successfully!!');</script>";
    }
    mysqli_close($conn);
?>