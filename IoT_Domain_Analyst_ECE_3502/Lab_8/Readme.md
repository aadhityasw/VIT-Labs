# Lab 8


## List of Programs

### 1. Data Processing and Visualization with KNIME

* To perform the required pre-processing of a dataset and use the “KNIME” program to create interactive visualisations demonstrating the features of the dataset and the relation between their parameters.
* Import the Dataset into KNIME workflow
* Perform the required pre-processing steps like choosing the required and necessary columns, rows, etc. We also handle the NULL values here.
* We create interactive visual representations of the data in the dataset to better understand the relationships between the parameters of the dataset
* Retrieve the Dataset
In this step, we download the dataset , or prepare it, or collect the data and form a dataset, or perform any of the processes to prepare a dataset. Here we download a dataset of the sales data of users.
* Import the Dataset
In this stage, we create a new KNIME workflow and import the CSV file into the workflow, either by dragging it into the workflow, or by choosing a CSV node, and configuring the path of the file leading to our dataset.
* Filter out the not so necessary Columns
In this stage, we choose the columns that are necessary for visualisation, and remove the remaining columns like “date”, “card_id”, “customer ID”, etc which are unique for each record and will thus not serve any purpose for an analysis project.
* Filter the Rows
In this stage, we remove the rows with “NULL” values, as these would just interfere with the analysis. 
* Visualisation — Bar Chart
In this stage, we have finished pre-processing the dataset, and are now going to visualise the dataset using interactive charts and diagrams. Here we have implemented a Bar chart of the amount and quantity across the regions. The amount is the one in orange, and the quantity is in blue.
* Visualisation — Pie Chart
As done in the previous part, we have a plotted a pie chart denoting the share of amount and quantity across countries. 
* We have thus produced successful results and have completed a Data Science lab experiment using the KNIME Software and have plotted our results here using the concepts of IoT and Data Science.
