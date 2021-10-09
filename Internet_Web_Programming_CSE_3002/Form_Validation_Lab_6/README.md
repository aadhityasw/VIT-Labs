# Javascript - Forms and Validation (Lab 6)

In this lab, we are tasked with creating a simple form which takes in choices for the products listed to come up with the total prices of the choosen items.


## Form Design Constraints:

* Total should be generated based on the number of checks in the check boxes, which sums
the amount specified.
* For T-Shirt, Quantity to be set from 1 to 5
* For T-Shirt, Colors are Red, Green and Blue
* For T-Shirt, Sizes are XS, S, M, L, XL, XXL
* Add a coupon code text box before submit button


## Coupon Code Generation:

Online shopping website had a plan to generate a unique coupon code for their customers which
they can use during checkout. For which they request the customer to enter either 7 or 8
character username through a text box.
 
* If it is a 7 character string, the characters generated for the coupon code are as follows: 
* * 1 – First character of the username in uppercase
* * 2 – Count of the number of vowels in theusername
* * 3 – Last character of the username
* * 4 – Any special character
* * 5 – Count of the non vowels in the username

* If it is a 8 character string, the characters generated for the coupon code are as follows:
* * The characters which appears in 1 to 10 positions in the English Alphabet in the username sequence.


## Core Task

Write a JavaScript Code and display
*   The Billing amount without applying discount
*  The amount to pay by giving a 10% discount on the bill amount after applying a coupon code
* If the amount to pay exceeds 10$ after applying discount, give an extra 10% discount and display the amount to pay.
*  Display the product details with the least and the greatest amount selected for billing.
*  Display the product details which is not selected for the billing.
