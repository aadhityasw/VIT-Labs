<html>
    <head>
        <title> Telephone Exchange </title>
    </head>
    <body>
        <h1>Telephone Exchange</h1>
        <form action="" method="post">
            Customer Number   <input type="text" name="customer" id="cust">
            <br><br>
            Useage     <input type="text" name="used" id="use">
            <br>
            <br>
            <input type="submit" value="Submit">
        </form>
        <br>
        <br>

        <?php
            $bill = 0.0;
            if ($_SERVER['REQUEST_METHOD'] == 'POST')
            {
                $cust = $_POST["customer"];
                $use = floatval($_POST["used"]);
                if($use <= 240)
                {
                    $bill = 35;
                }
                else if($use <= 1000)
                {
                    $bill = 140 + ($use-300)*(0.3);
                }
                else if($use <= 2000)
                {
                    $bill = 240 + ($use-1600)*(0.5);
                }
                else
                {
                    $bill = 790 + ($use-2900)*(0.3);
                }
                echo ("The total bill amount for " .$cust. " is : " . $bill."<br>");
            }
        ?>
    </body>
</html>