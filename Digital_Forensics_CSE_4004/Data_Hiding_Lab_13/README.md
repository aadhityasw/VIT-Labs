# Data hiding techniques (Lab 13)


There are several ways of hiding data. Try these


## 1)	Hiding entire partitions

By using the Windows diskpart remove letter command you can unassign the partition’s letter, which hides it from view in File Explorer. To unhide, use the diskpart assign letter command. Some tools such as Partition Magic, Partition Master, and Linux Grand Unified Bootloader (GRUB) are also useful for hiding or revealing partitions. To detect whether a partition has been hidden: 

*	account for all disk space when examining an evidence drive 
*	analyze any disk areas containing space you can’t account for.


## 2)	Changing file extensions

It is one of the first techniques to hide data. Advanced digital forensics tools check file headers. They compare the file extension to verify that it’s correct. If there’s a discrepancy, the tool flags the file as a possible altered file.


## 3)	Setting file attributes to hidden

This is done by selecting the Hidden attribute in a file’s Properties dialog box.


## 4)	Bit-shifting

Bit shifting changes data from readable code to data that looks like binary executable code. WinHex includes a feature for shifting bits


## 5)	Using encryption

It is possible to encrypt data using encryption algorithms such as AES and RSA. Many online encryption/decryption tools are available. For example, https://aesencryption.net

It is possible to encrypt a hard drive with Bitlocker in Windows 10, See https://www.securicy.com/blog/how-to-encrypt-a-hard-drive-with-bitlocker-in-windows-10


## 6)	Setting up password protection

Password-Protecting a Microsoft Office Document 

Enable password-protection for your document. You are able to activate password protection for Word, PowerPoint or Excel documents. This will limit the ability to open the file by requiring a password to be entered. The process may differ slightly depending on which version of Microsoft Office you have.

See https://www.wikihow.com/Create-a-Password-Protected-File-on-Windows-7  for more details



Include screenshots in your submission



