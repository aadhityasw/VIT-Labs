function couponGenerate(uname)
{
    var coupon = "";
    if(uname.length ==7)
    {
        coupon += uname.charAt(0).toUpperCase();
        var num = 0, num1 = 0;
        for(var i=0;i<uname.length;i++)
        {
            var c = uname.charAt(i).toLowerCase();
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
            {
                num++;
            }
            else
            {
                num1++;
            }
        }
        coupon += num;
        coupon += uname.charAt(uname.length - 1);
        coupon += '@';
        coupon += num1;
        return(coupon);
    }
    else if(uname.length == 8)
    {
        var ch, coupon='';
        for(var i=0;i<uname.length;i++)
        {
            ch = uname.charAt(i)
            if((ch>='a' && ch<'k') || (ch>='A' && ch<'K'))
            {
                coupon += ch;
            }
        }
        return(coupon);
    }
    else
    {
        return('error');
    }
}

function validateCoupon(uname, coupon)
{
    if(coupon!=null)
    {
        cgen = couponGenerate(uname);
        if(cgen == coupon)
        {
            return(true)
        }
    }
    return(false)
}
function onSubmit()
{
    var uname = document.forms["productForm"]["uname"].value;
    var coupon = document.forms["productForm"]["coupon"].value;
    var bill = 0, n=0, maxcost=0, mincost=0, cost;
    var notSelected = new Array();
    if(document.forms["productForm"]["tshirt"].checked)
    {
        cost= (document.forms["productForm"]["quantity"].value * 9.99);
        bill += cost;
        maxele = "Tshirt";
        maxcost = cost;
        minele = "Tshirt";
        mincost = cost;
    }
    else
    {
        notSelected[n++] = "T Shirt";
    }
    if(document.forms["productForm"]["mug"].checked)
    {
        bill += 4.99;
        if(maxcost==0)
        {
            maxcost = 4.99;
            mincost = 4.99;
            maxele = "Mug";
            minele = "Mug";
        }
        else if(mincost > 4.99)
        {
            minele = "Mug";
            mincost = 4.99;
        }
    }
    else
    {
        notSelected[n++] = "Mug";
    }
    if(document.forms["productForm"]["pencil"].checked)
    {
        bill += 2.99;
        if(maxcost==0)
        {
            maxcost = 2.99;
            mincost = 2.99;
            maxele = "Pencil";
            minele = "Pencil";
        }
        if(mincost > 2.99)
        {
            minele = "Pencil";
            mincost = 2.99;
        }
        if(maxcost < 2.99)
        {
            maxele = "Pencil";
            maxcost = 2.99;
        }
    }
    else
    {
        notSelected[n++] = "Pencil";
    }
    if(document.forms["productForm"]["sticker"].checked)
    {
        bill += 1.99;
        if(maxcost==0)
        {
            maxcost = 1.99;
            mincost = 1.99;
            maxele = "Sticker";
            minele = "Sticker";
        }
        else if(mincost > 1.99)
        {
            minele = "Sticker";
            mincost = 1.99;
        }
        if(maxcost < 1.99)
        {
            maxele = "Sticker";
            maxcost = 1.99;
        }
    }
    else
    {
        notSelected[n++] = "Sticker";
    }
    if(validateCoupon(uname, coupon))
    {
        bill = 0.9 * bill;
        if(bill > 10)
        {
            bill = 0.9 * bill;
        }
    }
    var totcost = document.getElementById("totcost");
    totcost.innerHTML = bill;



    // Objects not selected
    var notSelectedStatement = "The items not Selected are : <br>"
    for(var i=0;i<n;i++)
    {
        notSelectedStatement += notSelected[i] + "<br>";
    }

    //Print Maximum cost and minimum cost product.
    notSelectedStatement += "<br><br>"
    notSelectedStatement += "The product with maximum cost : " + maxele + "<br>" + "The product with minimum cost : " + minele + "<br>";

    document.getElementById("bill").innerHTML = notSelectedStatement;
}