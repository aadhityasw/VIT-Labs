<?php
    session_start();
    $cookie_name = "pnr";
    if(!isset($_COOKIE[$cookie_name]))
    {
        $pnr = 0;
        setcookie($cookie_name, serialize($pnr));
    }
    else
    {
        $pnr = unserialize($_COOKIE[$cookie_name], ["allowed_classes" => false]);
        $pnr += 1;
        setcookie($cookie_name, serialize($pnr));
    }

    $printval = "";
    $pno = $_SESSION['numtickets'];
    $details = $_SESSION['passengerdetails'];
    for($i=0;$i<$pno;$i++)
    {
        $printval .= "  <tr>
                            <td>" . ($i+1) . "</td>
                            <td>" . $details['name'.$i] . "</td>
                            <td>" . $details['age'.$i] . "</td>
                            <td>" . $details['gender'.$i] . "</td>
                            <td>" . $details['nationality'.$i] . "</td>
                            <td>" . $details['idtype'.$i] . "</td>
                            <td>" . $details['idno'.$i] . "</td>
                            <td> CNF </td>
                        </tr>";
    }
?>

<html>
    <head>
        <title>View Ticket</title>
    </head>
    <body>
        <h1>Ticket</h1>
        <h2>Ticket Details</h2>
        <table>
            <tr>
                <th>Train No : </th>
                <td><?php echo $_SESSION['trainno']; ?></td>
            </tr>
            <tr>
                <th>Train Name : </th>
                <td><?php echo $_SESSION['trainname']; ?></td>
            </tr>
            <tr>
                <th>PNR No : </th>
                <td><?php echo $pnr; ?></td>
            </tr>
            <tr>
                <th>Date of Booking : </th>
                <td><?php echo date("Y-m-d"); ?></td>
            </tr>
            <tr>
                <th>Date of Journey : </th>
                <td><?php echo $_SESSION['datej']; ?></td>
            </tr>
            <tr>
                <th>Day of Journey : </th>
                <td>
                    <?php 
                        $d = $_SESSION['weekday'];
                        switch($d)
                        {
                            case 1 :
                                echo "Monday";
                                break;
                            case 2 :
                                echo "Tuesday";
                                break;
                            case 3 :
                                echo "Wednesday";
                                break;
                            case 4 :
                                echo "Thursday";
                                break;
                            case 5 :
                                echo "Friday";
                                break;
                            case 6 :
                                echo "Saturday";
                                break;
                            case 7 :
                                echo "Sunday";
                                break;
                        }
                    ?>
                </td>
            </tr>
            <tr>
                <th>From : </th>
                <td><?php echo $_SESSION['fromstn']; ?></td>
            </tr>
            <tr>
                <th>To : </th>
                <td><?php echo $_SESSION['tostn']; ?></td>
            </tr>
            <tr>
                <th>Number of Passengers : </th>
                <td><?php echo $_SESSION['numtickets'] ?></td>
            </tr>
            <tr>
                <th>Class : </th>
                <td><?php echo $_SESSION['classtype'] ?></td>
            </tr>
            <tr>
                <th>Total Fare : </th>
                <td>
                    <?php
                        $fare = intval($_SESSION['price']);
                        $numticket = intval($_SESSION['numtickets']);
                        $totcost = $fare * $numticket;
                        $_SESSION['totcost'] = $totcost;
                        echo $totcost;
                    ?>
                </td>
            </tr>
        </table>
        <h2>Passenger Details</h2>
        <table>
            <tr>
                <th>Slno.</th>
                <th>Name</th>
                <th>Age</th>
                <th>Gender</th>
                <th>Nationality</th>
                <th>ID type</th>
                <th>ID Card Number</th>
                <th>Ticket Status</th>
            </tr>
            <?php echo $printval; ?>
        </table>
        <form action="<?php $_SERVER['PHP_SELF'] ?>" method="post">
            <input type="submit" value="Exit">
        </form>
    </body>
</html>

<?php
    if($_SERVER['REQUEST_METHOD'] == 'POST')
    {
        session_unset();
        session_destroy();
        header("location:home.html");
    }
?>