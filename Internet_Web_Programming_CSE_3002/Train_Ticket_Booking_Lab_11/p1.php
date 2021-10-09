<?php
    session_start();
?>
<html>
    <head>
        <title>Journey Details</title>
    </head>
    <body>
        <h1>Journey Details</h1>
        <form action="<?php $_SERVER['PHP_SELF'] ?>" method="POST">
            <table>
                <tr>
                    <td>From Station</td>
                    <td><input type="text" name="fromstn" id="fromstn"></td>
                </tr>
                <tr>
                    <td>To Station</td>
                    <td><input type="text" name="tostn" id="tostn"></td>
                </tr>
                <tr>
                    <td>Date</td>
                    <td><input type="date" name="datej" id="datej"></td>
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
    if($_SERVER["REQUEST_METHOD"] == "POST")
    {
        $_SESSION["fromstn"] = $_POST["fromstn"];
        $_SESSION["tostn"] = $_POST["tostn"];
        $_SESSION["datej"] = $_POST["datej"];
        $_SESSION["weekday"] = date("N", $_SESSION["datej"]);
        // 1 (for Monday) through 7 (for Sunday).
        header("location:p2.php");
    }
?>