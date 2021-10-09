<html>
    <head>
        <title>Vit Government Voting (Official)</title>
    </head>
    <body>
        <h1>Voting Form</h1>
        <form action="" method="post">
            <table id="formstable">
                <tr>
                    <td>Sumit</td>
                    <td>
                        <input type="number" name="sumit" id="sumit">
                    </td>
                </tr>
                <tr>
                    <td>Arpit</td>
                    <td>
                        <input type="number" name="arpit" id="arpit">
                    </td>
                </tr>
                <tr>
                    <td>Harsha</td>
                    <td>
                        <input type="number" name="harsha" id="harsha">
                    </td>
                </tr>
                <tr>
                    <td>Can 4</td>
                    <td>
                        <input type="number" name="can4" id="can4">
                    </td>
                </tr>
                <tr>
                    <td><input type="submit" name="vote" value="vote"></td>
                    <td><input type="submit" name="declare-result" value="declare-result"></td>
                </tr>
            </table>
        </form>
        <?php
            $names = array("Sumit", "Arpit", "Harsha", "Can4");
            $cookie_name = "scores";
            if(!isset($_COOKIE[$cookie_name]))
            {
                $scores = array(0,0,0,0);
                setcookie($cookie_name, serialize($scores));
            }
            else
            {
                $scores = unserialize($_COOKIE[$cookie_name], ["allowed_classes" => false]);
            }
            if ($_SERVER['REQUEST_METHOD'] == 'POST')
            {
                if(isset($_POST['vote']))
                {
                    $scores[0] += intval($_POST["sumit"]);
                    $scores[1] += intval($_POST["arpit"]);
                    $scores[2] += intval($_POST["harsha"]);
                    $scores[3] += intval($_POST["can4"]);
                    echo "Vote has been casted";
                }
                if(isset($_POST['declare-result']))
                {
                    $maxvalue = max($scores);
                    $str = "The candidate(s) with the maximum number of votes are : <br>";
                    for ($i=0; $i < 4; $i++) { 
                        if($scores[$i] == $maxvalue)
                        {
                            $str = $str.$names[$i]."   ".$scores[$i]."<br>";
                        }
                    }
                    echo $str;
                }
                setcookie($cookie_name, serialize($scores));
            }
        ?>
    </body>
</html>