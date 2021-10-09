<?php
    $$conn = mysqli_connect("localhost", "root", "", "iwp");
    if (!$conn) 
    {
        die("Connection failed: " . mysqli_connect_error());
    }
    $delcode=$_GET['delcode'];
    $sql="SELECT * FROM shop WHERE icode='$delcode' LIMIT 1"; $result=mysqli_query($conn,$sql);
    if (mysqli_fetch_array($result))
    {
        $outsql="DELETE FROM shop WHERE icode='$delcode'"; if(mysqli_query($conn,$outsql))
        echo "<script>alert('Item successfully deleted from cart!');</script>";
    }
    else
    {
        echo "<script>alert('Item not present in cart!!');</script>";
    }
    mysqli_close($conn);
?>