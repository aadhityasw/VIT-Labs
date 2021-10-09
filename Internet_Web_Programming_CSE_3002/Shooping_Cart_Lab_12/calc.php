<?php
    $$conn = mysqli_connect("localhost", "root", "", "iwp");
    if (!$conn) 
    {
        die("Connection failed: " . mysqli_connect_error());
    }
    $sql="SELECT icode,cost,quant FROM shop"; $result=mysqli_query($conn,$sql);
    if(mysqli_num_rows($result)>0)
    {
        $total=0;
        while($row=mysqli_fetch_assoc($result))
        {
            echo "Item: " . $row["icode"]. "\tCost: " . $row["cost"]. "\tQuantity:" . $row["quant"]. "<br>";
            $total=$total+($row["cost"]*$row["quant"]);
        }
        echo nl2br("\nYour total bill is = $".$total);
        $outsql="DELETE FROM shop";
        if(mysqli_query($conn,$outsql))
            echo "<br> Your cart has been emptied!!";
    }
    else
    {
        echo "Your cart is empty";
    }
    mysqli_close($conn);
?>
