function makeModifications()
{
    var xhttp = new XMLHttpRequest();
  
    xhttp.onload = function() {
        var x = document.getElementsByTagName("ol")[0];
        //  Part 1
        x.style.backgroundColor = "beige";
        //  Part 2
        x.style.color = "blue";
        //  Part 3
        var y = x.getElementsByTagName("li");
        var i;
        for(i in y)
        {
            var s = y[i].innerText;
            y[i].innerText = (s + " (New)");
        }
        //  Part 4
        var a = document.getElementsByTagName("a");
        for(i=0;i<a.length;i++)
        {
            if(a[i].name != "")
            {
                a[i].style.backgroundColor = "#eee";
            }
            
        }
        //  Part 5
        var b = document.createElement("div");
        b.innerHTML="Hello World!";
        var c = document.createElement("button");
        c.id = "ajax-button";
        c.innerText = "More";
        c.onclick = function(){
            alert("Hello World !\n The more button is clicked.");
        }
        var d = document.getElementsByTagName("body")[0];
        document.body.insertBefore(b, d.childNodes[0]);
        document.body.insertBefore(c, d.childNodes[1]);
    };
    xhttp.open("GET", "", true);
    xhttp.send();
}