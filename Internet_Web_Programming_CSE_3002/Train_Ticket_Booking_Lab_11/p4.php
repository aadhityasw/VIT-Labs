<?php
    session_start();
    $pno = $_SESSION['numtickets'];
    $printval = "";
    for($i=0;$i<$pno;$i++)
    {
        $printval .= "<tr>
                            <td>" . $i . "</td>
                            <td> <input type='text' name='name" . $i . "'> </td>
                            <td> <input type='number' name='age" . $i . "'> </td>
                            <td>
                                <select name='gender" . $i . "' id='gender" . $i . "'>
                                    <option value='male'>Male</option>
                                    <option value='female'>Female</option>
                                </select>
                            </td>
                            <td>
                                <select name='nationality" . $i . "' id='nationality" . $i . "'>
                                    <option value='indian'>Indian</option>
                                    <option value='others'>Others</option>
                                </select>
                            </td>
                            <td>
                                <select name='idtype" . $i . "' id='idtype" . $i . "'>
                                    <option value='aadhaar card'>Aadhaar Card</option>
                                    <option value='pan card'>Pan Card</option>
                                    <option value='drivers license'>Drivers License</option>
                                    <option value='ration card'>Ration Card</option>
                                    <option value='student id card'>Student Id Card</option>
                                </select>
                            </td>
                            <td> <input type='text' name='idno" . $i . "'> </td>
                     </tr>";
    }
?>

<html>
    <head>
        <title>Passenger Details</title>
    </head>
    <body>
        <h1>Enter Passenger Details</h1>
        <form action="<?php $_SERVER['PHP_SELF'] ?>" method="post">
            <table>
                <tr>
                    <th>Sno.</th>
                    <th>Name</th>
                    <th>Age</th>
                    <th>Gender</th>
                    <th>Nationality</th>
                    <th>ID type</th>
                    <th>ID Card Number</th>
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
        $_SESSION['passengerdetails'] = $_POST;
        header("location:p5.php");
    }
?>