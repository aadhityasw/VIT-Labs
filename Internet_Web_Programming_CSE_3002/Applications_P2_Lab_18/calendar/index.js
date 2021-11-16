function hoveron(i)
{
    var x = document.getElementById("result");
    if(i == 12)
    {
        x.innerHTML = "Occasion : Telugu New Year";
    }
    else if(i == 18)
    {
        x.innerHTML = "Occasion : Tamil New Year";
    }
    else if(i == 20)
    {
        x.innerHTML = "Occasion : English New Year";
    }
}

function hoveroff()
{
    var x = document.getElementById("result");
    x.innerHTML = "";
}