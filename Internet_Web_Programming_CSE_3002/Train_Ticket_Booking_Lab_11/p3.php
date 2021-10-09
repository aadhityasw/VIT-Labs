<?php
    session_start();
    $conn = new mysqli("localhost", "root", "", "iwp");
    if($conn->connect_error)
    {
        die("Database Connection failed" . $conn->connect_error);
    }
    echo "<script>console.log('Database connection established successfully.);</script>";
    $tno = intval($_SESSION['trainno']);
    $sql = "SELECT classname, avalible, price FROM coach WHERE (trainno=$tno)";
    $request = $conn->query($sql);
    $printval = "";
    while($row = mysqli_fetch_array($request))
    {
        $printval .= "<tr>
                    <td> <input type='radio' name='class' value='" . $row['classname'] . "'> </td>
                    <td> " . $row['classname'] . "</td>
                    <td> " . $row['avalible'] . "</td>
                    <td> " . $row['price'] . "</td>
                </tr>";
    }
?>

<html>
    <head>
        <title>Class Selection</title>
    </head>
    <body>
        <h1>Class Selection</h1>
        <h2><?php echo ($_SESSION['trainno'] . " - " . $_SESSION['trainname']); ?></h2>
        <form action="<?php $_SERVER['PHP_SELF'] ?>" method="post">
            <table>
                <tr>
                    <th>Select</th>
                    <th>Class Type</th>
                    <th>Avalible Seats</th>
                    <th>Ticket Price</th>
                </tr>
                <?php echo $printval; ?>
            </table>
            <table>
                <tr>
                    <td>Enter the number of tickets needed : </td>
                    <td><input type="number" name="numtickets" id="numtickets"></td>
                </tr>
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
        $numt = intval($_POST['numtickets']);
        $ctype = $_POST['class'];
        $tno = $_SESSION['trainno'];
        $sql = "SELECT price, avalible FROM coach WHERE (classname='$ctype' AND trainno=$tno);";
        $request = $conn->query($sql);
        if(!empty($request))
        {
            $arr =  mysqli_fetch_array($request);
            $avno = intval($arr['avalible']) - $numt;
            $ticost = intval($arr['price']);
            if($avno >= 0)
            {
                $sql = "UPDATE coach SET avalible=$avno WHERE(classname='$ctype' AND trainno=$tno);";
                $result = $conn->query($sql);
                $_SESSION['numtickets'] = $numt;
                $_SESSION['classtype'] = $ctype;
                $_SESSION['price'] = $ticost;
                header("location:p4.php");
            }
            else
            {
                echo "Enough tickets are currently unavalible in the class selected.";
            }
        }
    }
?>