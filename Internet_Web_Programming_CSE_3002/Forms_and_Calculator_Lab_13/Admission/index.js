var generatedCaptcha;

function generateCaptcha()
{
    generatedCaptcha = parseInt(Math.random()*1000000);
    var ob = document.getElementById("captcha");
    ob.value = generatedCaptcha;
    ob.readOnly = true;
    ob.onclick = null;
}

function displayDate()
{
    var d = new Date();
    var ob = document.getElementById("date");
    ob.innerHTML = d;
}

function formSubmitted()
{
    var form = document.forms["admission"];
    var name = form["name"].value;
    var applno = form["applno"].value;
    var std = form["std"].value;
    var email = form["email"].value;
    var captcha = parseInt(form["captcha-entered"].value);
    var pattern = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,6}$/;
    if(!pattern.test(email))
    {
        alert("Email entered is invalid.");
    }
    else if (captcha != generatedCaptcha) {
        alert("Captcha entered is invalid.");
    }
    else
    {
        alert("The details have been submitted.");
    }
    event.preventDefault();
}