function formSubmitted(event)
{
    event.preventDefault();
    if (
        checkName() &&
        checkEmail() &&
        checkPhone() &&
        checkPassword() &&
        verifyPassword() &&
        checkYear() &&
        checkWeight()
    )
    {
        alert("The form has been successfully submitted.");
    }
    else
    {
        alert("The form cannot be submitted as there are errors in the entered values. Correct those fields in order to submit the form.");
    }
}

function checkName()
{
    var val = document.getElementById("name").value;
    if(val.length == 0)
    {
        document.getElementById("name").style.background ="red";
        document.getElementById("name_error").style.display = "none";
        return false;
    }
    else if(val.match(/^[A-Za-z ]+$/))
    {
        document.getElementById("name").style.background ="white";
        document.getElementById("name_error").style.display = "none";
        return true;
    }
    else
    {
        document.getElementById("name").style.background ="red";
        document.getElementById("name_error").style.display = "block";
        return false;
    }
}

function checkEmail()
{
    var val = document.getElementById("email").value;
    if(val.length == 0)
    {
        document.getElementById("email").style.background ="red";
        document.getElementById("email_error").style.display = "none";
        return false;
    }
    else if(val.match(/^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/))
    {
        document.getElementById("email").style.background ="white";
        document.getElementById("email_error").style.display = "none";
        return true;
    }
    else
    {
        document.getElementById("email").style.background ="red";
        document.getElementById("email_error").style.display = "block";
        return false;
    }
}

function checkPhone()
{
    var val = document.getElementById("phone").value;
    if(val.length == 0)
    {
        document.getElementById("phone").style.background ="red";
        document.getElementById("phone_error").style.display = "none";
        return false;
    }
    else if(val.match(/^\d+$/) && val.length == 10)
    {
        document.getElementById("phone").style.background ="white";
        document.getElementById("phone_error").style.display = "none";
        return true;
    }
    else
    {
        document.getElementById("phone").style.background ="red";
        document.getElementById("phone_error").style.display = "block";
        return false;
    }
}

function checkPassword()
{
    var val = document.getElementById("pass").value;
    if(val.length == 0)
    {
        document.getElementById("pass").style.background ="red";
        document.getElementById("pass_error").style.display = "none";
        return false;
    }
    else if(val.length >= 8)
    {
        document.getElementById("pass").style.background ="white";
        document.getElementById("pass_error").style.display = "none";
        return true;
    }
    else
    {
        document.getElementById("pass").style.background ="red";
        document.getElementById("pass_error").style.display = "block";
        return false;
    }
}

function verifyPassword()
{
    var val = document.getElementById("pass").value;
    var val2 = document.getElementById("vpass").value;
    if(val2.length == 0)
    {
        document.getElementById("vpass").style.background ="red";
        document.getElementById("vpass_error").style.display = "none";
        return false;
    }
    else if(val == val2)
    {
        document.getElementById("vpass").style.background ="white";
        document.getElementById("vpass_error").style.display = "none";
        return true;
    }
    else
    {
        document.getElementById("vpass").style.background ="red";
        document.getElementById("vpass_error").style.display = "block";
        return false;
    }
}

function checkYear()
{
    var val = document.getElementById("year").value;
    if(val.length == 0)
    {
        document.getElementById("year").style.background ="red";
        document.getElementById("year_error").style.display = "none";
        return false;
    }
    else if(val.match(/^\d+$/) && val.length == 4 && parseInt(val)<=2020)
    {
        document.getElementById("year").style.background ="white";
        document.getElementById("year_error").style.display = "none";
        return true;
    }
    else
    {
        document.getElementById("year").style.background ="red";
        document.getElementById("year_error").style.display = "block";
        return false;
    }
}

function checkWeight()
{
    var val = document.getElementById("weight").value;
    if(val.length == 0)
    {
        document.getElementById("weight").style.background ="red";
        document.getElementById("weight_error").style.display = "none";
        return false;
    }
    else if(val.match(/^\d+$/) && val.length < 3)
    {
        document.getElementById("weight").style.background ="white";
        document.getElementById("weight_error").style.display = "none";
        return true;
    }
    else
    {
        document.getElementById("weight").style.background ="red";
        document.getElementById("weight_error").style.display = "block";
        return false;
    }
}