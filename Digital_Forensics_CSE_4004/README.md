# Digital Forensics - CSE4004


## Setup

The setup procedure followed here is a Windows 7 Professional edition with a list of tools installed which have been stated within the corresponding lab directory. This Operating system in my case is run inside a virtual box environment. You can do the same process, or follow any other version of the Windows operating system.

There are also certain virtual machines available which can be used for a maximum of 90 days, and depending on the version they can be renewed for another term too.

* [Windows 10 virtual machines to test Microsoft Edge](https://developer.microsoft.com/en-us/microsoft-edge/tools/vms/)
* [Get a Windows 10 development environment](https://developer.microsoft.com/en-us/windows/downloads/virtual-machines/)


There is also a slew of softwares, and web applications which are required to complete the labs. The links to each of those are given below. As specfied above, some of these are trial version, and thus have their own duration of trial. So check them out before installing the tools.

1. [An online Hashing Web Application](http://www.fileformat.info/tool/hash.htm)
2. [Microsoft’s Log Parser Tool](https://www.microsoft.com/en-us/download/details.aspx?id=24659)
3. [Microsoft Event Viewer](https://docs.microsoft.com/en-us/host-integration-server/core/windows-event-viewer1)
4. [Event Log Explorer](https://eventlogxp.com/download.php)
5. [Strings utility](https://docs.microsoft.com/en-us/sysinternals/downloads/strings)
6. [Event Log Explorer](https://www.digital-detective.net/dcode/)
7. [7Zip](https://www.7-zip.org/download.html)



## List of Programs

#### 1. [Hash functions for verifying the integrity of files or messages](./Hash_Functions_Lab_1)

We here deal with the concept of hashing text, files of different formats using various hashing algorithms, their properties, and also the general necessary qualifications and qualities of a good hash function, and also we have seen what makes a hash function have collisions. We also demonstrate a hash collision of the `MD5` hashing algorithm.

* [An online Hashing Web Application](http://www.fileformat.info/tool/hash.htm)


#### 2. [File analysis tools](./File_Analysis_Lab_2)

We have in this experiment, analysed directories on the hard disk using `Microsoft’s Log Parser Tool`, and performed tasks like knowing the top 10 largest or smallest files in a directory, etc.

* [Microsoft’s Log Parser Tool](https://www.microsoft.com/en-us/download/details.aspx?id=24659)


#### 3. [Event log analysis](./Event_Logs_Lab_3)

In this exercise, we will use this tool to find the events like log in log out and an attempt to query the existence of blank password user account, etc.

* [Microsoft Event Viewer](https://docs.microsoft.com/en-us/host-integration-server/core/windows-event-viewer1)
* [Event Log Explorer](https://eventlogxp.com/download.php)


#### 4. [File forensics](./File_Forensics_Lab_4)

In this exercise, we analyse the properties of word (DOCX) files, like viewing it under different circumstances, using different tools and performing date encodings.

* [Strings utility](https://docs.microsoft.com/en-us/sysinternals/downloads/strings)
* [Event Log Explorer](https://www.digital-detective.net/dcode/)
* [7Zip](https://www.7-zip.org/download.html)
