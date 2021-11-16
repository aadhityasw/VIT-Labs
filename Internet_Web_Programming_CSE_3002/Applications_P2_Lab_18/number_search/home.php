<html>
    <head>
        <title>Searching</title>
    </head>
    <body>
        <h1>Number Search</h1>
        <form action="<?php $_SERVER['PHP_SELF'] ?>" method="post">
            <table>
                <tr>
                    <th>Enter the numbers : </th>
                    <td><textarea name="numberlist" id="numberlist" cols="30" rows="10"></textarea></td>
                </tr>
                <tr>
                    <th>Enter the number to be found : </th>
                    <td><input type="text" name="numberfind" id="numberfind"></td>
                </tr>
                <tr>
                    <td></td>
                    <td><input type="submit" value="Submit"></td>
                </tr>
            </table>
        </form>
    </body>
</html>

<?php
    if($_SERVER['REQUEST_METHOD'] == 'POST')
    {
        $arr = explode(",", $_POST['numberlist']);
        $num = intval($_POST['numberfind']);
        $count = 0;
        for($i=0;$i<sizeof($arr);$i++)
        {
            if(intval($arr[$i]) == $num)
            {
                $count ++;
            }
        }
        if($count == 0)
        {
            echo "The entered number is not present in the array of numbers." ;
        }
        else
        {
            echo "<h2>The entered number " . $num . " is present in the array " . $count . " times.</h2>";
        }
    }
?>