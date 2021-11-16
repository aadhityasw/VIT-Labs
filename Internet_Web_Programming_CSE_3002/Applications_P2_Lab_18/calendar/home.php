<?php
    $printval = "";
    for($i=1;$i<=31;$i++)
    {
        if($i == 0)
        {
            $printval .= "<tr>
                                <td onmouseover='hoveron($i)' onmouseout='hoveroff()'> " . $i . "</td>";
        }
        elseif ($i == 31)
        {
            $printval .= "      <td onmouseover='hoveron($i)' onmouseout='hoveroff()'> " . $i . "</td>
                            </tr>";
        }
        elseif (($i-1) % 7 == 0) 
        {
            $printval .= "</tr>
                          <tr>
                                <td onmouseover='hoveron($i)' onmouseout='hoveroff()'> " . $i . "</td>";
        }
        else
        {
            $printval .= "<td onmouseover='hoveron($i)' onmouseout='hoveroff()'> " . $i . "</td>";
        }
    }
?>

<html>
    <head>
        <title>Calendar</title>
        <link rel="stylesheet" type="text/css" href="home.css">
        <script src="index.js"></script>
    </head>
    <body>
        <h1>Calendar</h1>
        <table>
            <?php echo $printval; ?>
        </table>
        <h1 id="result"></h1>
    </body>
</html>