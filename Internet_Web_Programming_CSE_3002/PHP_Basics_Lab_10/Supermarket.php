<html>
    <head>
        <title> Supermarket </title>
    </head>
    <body>
        <h1>Ultra Market</h1>
        <form action="" method="post">
            Notebook   <input type="text" name="Notebook" id="nbk">
            <br><br>
            Book    <input type="text" name="Book" id="bk">
            <br><br>
            Desktop   <input type="text" name="Desktop" id="dsk">
            <br><br>
            Laptop   <input type="text" name="Laptop" id="lpt">
            <br><br>
            <input type="submit" value="Submit">
        </form>
        <br>
        <br>

        <?php
            $intsum = 0;
            $flosum = 0.0;
            $f = array();
            $v = array();
            if ($_SERVER['REQUEST_METHOD'] == 'POST')
            {
                foreach($_POST as $f=>$v)
                {
                    if($v != NULL)
                    {
                        if(floatval($v) != number_format($v))
                        {
                            $flosum += floatval($v);
                        }
                        elseif(floatval($v) == number_format($v))
                        {
                            $intsum += number_format($v);
                        }
                    }
                }
                echo ("This sum of integer values are : " . $intsum."<br>");
                echo ("This sum of float values are : " . $flosum."<br>");
            }
        ?>
    </body>
</html>