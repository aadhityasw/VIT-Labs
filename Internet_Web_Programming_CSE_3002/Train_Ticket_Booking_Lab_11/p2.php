<?php
    session_start();
    $conn = new mysqli("localhost", "root", "", "iwp");
    if($conn->connect_error)
    {
        die("Database Connection failed" . $conn->connect_error);
    }
    echo "<script>console.log('Database connection established successfully.);</script>";
    $fstn = $_SESSION['fromstn'];
    $tstn = $_SESSION['tostn'];
    $sql = "SELECT trainno, trainname FROM train WHERE (from_station='$fstn' AND to_station='$tstn');";
    $request = $conn->query($sql);
    $printval = "";
    if(!empty($request))
    {
        while($row = mysqli_fetch_array($request))
        {
            $printval .= "<tr>
                        <td> <input type='radio' name='train' value='" . $row["trainno"] . "'> </td>
                        <td> " . $row['trainno'] . "</td>
                        <td> " . $row['trainname'] . "</td>
                    </tr>";
        }
    }
?>

<html>
    <head>
        <title>Train Selection</title>
    </head>
    <body>
        <h1>Train Selection</h1>
        <form action="<?php $_SERVER['PHP_SELF'] ?>" method="post">
            <table>
                <tr>
                    <th>Select</th>
                    <th>Train Number</th>
                    <th>Train Name</th>
                </tr>
                <?php echo $printval; ?>
            </table>
            <table>
                <tr>
                    <td></td>
                    <td><input type="submit" value="Next"></td>
                </tr>
            </table>
        </form>
    </body>
</html>


<?php
    if($_SERVER['REQUEST_METHOD'] == 'POST')
    {
        $tno = intval($_POST['train']);
        $_SESSION['trainno'] = $tno;
        $sql = "SELECT trainname FROM train WHERE (trainno = $tno);";
        $request = $conn->query($sql);
        $_SESSION['trainname'] = mysqli_fetch_array($request)['trainname'];
        header("location:p3.php");
    }
?>