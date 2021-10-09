var local = new Array()
var world = new Array()
var sports = new Array()

function formSubmitted() {
    var tit = document.forms["newNewsForm"]["newtitle"].value;
    var cont = document.forms["newNewsForm"]["newcontent"].value;
    var da = document.forms["newNewsForm"]["newdate"].value;
    var ty = document.forms["newNewsForm"]["newtype"].value;

    if(tit != "" && cont != "" && da != "")
    {
        var x = {
            title : tit,
            content : cont,
            date : da,
        }
        if(ty == "local")
        {
            local.push(x);
        }
        else if(ty == "world")
        {
            world.push(x);
        }
        else
        {
            sports.push(x);
        }
        displayData();
    }
    else
    {
        alert("Please fill all fields.");
    }
    event.preventDefault();
}

function displayData()
{
    local.sort(compare);
    world.sort(compare);
    sports.sort(compare);
    var local_data="", world_data="", sports_data="";
    var i = 0;
    for(i=0;i<local.length;i++)
    {
        local_data += "<div class='individualNews'><h4>" + local[i].title + "</h4><p>" + local[i].content + "</p></div>";
    }
    for(i=0;i<world.length;i++)
    {
        world_data += "<div class='individualNews'><h4>" + world[i].title + "</h4><p>" + world[i].content + "</p></div>";
    }
    for(i=0;i<sports.length;i++)
    {
        sports_data += "<div class='individualNews'><h4>" + sports[i].title + "</h4><p>" + sports[i].content + "</p></div>";
    }
    if(local.length != 0)
    {
        var loc = document.getElementById("local_in");
        loc.innerHTML = local_data;
    }
    if(world.length != 0)
    {
        var wor = document.getElementById("world_in");
        wor.innerHTML = world_data;
    }
    if(sports.length != 0)
    {
        var spo = document.getElementById("sports_in");
        spo.innerHTML = sports_data;
    }
}

function compare(a, b) {
    if (a.date > b.date) return 1;
    if (b.date > a.date) return -1;
    return 0;
  }