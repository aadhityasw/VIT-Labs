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
8. [Winhex Hexadecimal Editor](https://x-ways.net/winhex/)
9. [Streams utility](https://docs.microsoft.com/en-us/sysinternals/downloads/streams)
10. [Disk Explorer](https://www.runtime.org/diskexplorer.htm)
11. [Windows Disk Management Tool](https://docs.microsoft.com/en-us/windows-server/storage/disk-management/overview-of-disk-management)
12. [Test Disk](https://www.cgsecurity.org/wiki/TestDisk)
13. [PhotoRec](https://www.cgsecurity.org/wiki/PhotoRec)
14. [EaseUS](http://down.easeus.com/product/drw_trial)
15. [Active UnDelete](http://www.active-undelete.com/undelete.htm)
16. [Disk Drill](https://www.disk-drill.com)
17. [Windows Registry Editor](https://www.regedit.us/)



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


#### 5. [Windows Command Line](./Windows_Command_Line_Lab_5)

In this exercise, we have dealt with and seen how the command line tools and the shell commands are run, a few examples of how powerful they are, and also seen how such commands can be grouped together and executed at once like executing scripts using batch files.


#### 6. [Identifying file types](./File_Formats_Lab_6)

In this exercise, we analyse the various file extensions and formats available and popularly used.


#### 7. [Comparing file structures using a Hex editor](./File_Structures_Lab_7)

In this exercise, we analyse the file formats namely how they are identified by the file management system and also thus by the operating systems.

We have also dealt with hidden data streams in the NTFS file systems, and have discussed ways in which to track them and also to open them.

* [Winhex Hexadecimal Editor](https://x-ways.net/winhex/)
* [Streams utility](https://docs.microsoft.com/en-us/sysinternals/downloads/streams)


#### 8. [Investigating NTFS / FAT/ Linux drives](./Investigating_Drives_Lab_8)

In this exercise, we analyse the forensic image of the drives of FAT, GPT or NTFS file formats.

* [Disk Explorer](https://www.runtime.org/diskexplorer.htm)


#### 9. [File Signature Analysis](./File_Signatures_Lab_9)

In this exercise, we analyse the file formats namely how they are identified by the file management system and also thus by the operating systems.

* [Winhex Hexadecimal Editor](https://x-ways.net/winhex/)


#### 10. [Recovering Deleted Partitions and Deleted Files](./Partition_Recovery_Lab_10)

In this exercise, we deal with the recovering and restoring files from deleted partitions of a hard disk drive and also from partitions which are invisible in standard disk management tools, or are visible as unallocated region due to various reasons ranging from it being corrupted to a suspect hiding confidential data in such regions..

* [Windows Disk Management Tool](https://docs.microsoft.com/en-us/windows-server/storage/disk-management/overview-of-disk-management)
* [Test Disk](https://www.cgsecurity.org/wiki/TestDisk)
* [PhotoRec](https://www.cgsecurity.org/wiki/PhotoRec)
* [EaseUS](http://down.easeus.com/product/drw_trial)
* [Active UnDelete](http://www.active-undelete.com/undelete.htm)


#### 11. [File Carving](./File_Carving_Lab_11)

In this exercise, we analyse the file and data carving to recover hidden files from within other files, or to recover files from partitions or disk images which are invisible in standard disk management tools, or are visible as unallocated region due to various reasons ranging from it being corrupted to a suspect hiding confidential data in such regions.

* [Winhex Hexadecimal Editor](https://x-ways.net/winhex/)
* [Disk Drill](https://www.disk-drill.com)


#### 12. [Windows Registry Forensics](./Windows_Registry_Lab_12)

In this exercise, we analyse the various keys associated with the Windows operating system, namely how we can use this internal data tool to explore the various scenarios which is done during a forensic investigation.

* [Windows Registry Editor](https://www.regedit.us/)
