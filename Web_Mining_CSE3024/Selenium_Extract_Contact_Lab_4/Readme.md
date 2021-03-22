# Using Selenium to extract Contact info

## Question

Read the given website and extract the phone numbers and emails and contact addresses.

## Steps

We will be using the Selenium library and the Python Programming language to accomplish this task.

We have first imported the necessary packages and then created a safari browser supported web driver using the selenium library.

We then use this library to open the VIT University home page. From here we locate the “contact us” link. We then use the driver to click on this link and redirect us to the “Contact Us” web page.

In this page, we can notice that there are three tables containing the contact details. The first table has the details of the university officials along with their phone numbers and addresses. The next two tables share common format stating the names, designations and their email addresses.

For the first table, we process differently than the other two. We get the text inside each of the cells. There are anchor tags and para tags etc placed randomly inside these cells and so we cannot take the text from these cells directly. So we carefully navigate through these DOM structures only if they are present, and gather the details carefully from the child nodes and the text directly placed. We run the email addresses through a REGEX filter to ensure its authenticity. We then store all these details in a text file. Each paragraph of this text file is a new contact information, and contains details like their phone and physical as well as their email addresses and phone numbers.

For the remaining tables, we follow the same strategy. We take these details and store them in a CSV file. We go through each row, take the first column data, store it in name, the next in designation, and the last column has an anchor tag, so we collect its data and then use a REGEX validator to verify the authenticity of the email address, if valid we store it in the file.
