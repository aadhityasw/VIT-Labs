# Application (Lab 15)


## Q1) Email Header Analyser

Analyse the following email header using a tool and determine the source, destination, path taken etc. 

```txt
From: Media Temple user (mt.kb.user@gmail.com)
Subject: article: How to Trace a Email
Date: January 25, 2011 3:30:58 PM PDT
To: user@example.com
Return-Path: <mt.kb.user@gmail.com> Envelope-To: user@example.com Delivery-Date: Tue, 25 Jan 2011 15:31:01 -0700
Received: from po-out-1718.google.com ([72.14.252.155]:54907) by cl35.gs01.gridserver.com with esmtp (Exim 4.63) (envelope-from <mt.kb.user@gmail.com>) id 1KDoNH-0000f0-RL for user@example.com; Tue, 25 Jan 2011 15:31:01 -0700
Received: by po-out-1718.google.com with SMTP id y22so795146pof.4 for <user@example.com>; Tue, 25 Jan 2011 15:30:58 -0700 (PDT)
Received: by 10.141.116.17 with SMTP id t17mr3929916rvm.251.1214951458741; Tue, 25 Jan 2011 15:30:58 -0700 (PDT)
Received: by 10.140.188.3 with HTTP; Tue, 25 Jan 2011 15:30:58 -0700 (PDT)
Dkim-Signature: v=1; a=rsa-sha256; c=relaxed/relaxed; d=gmail.com; s=gamma; h=domainkey- signature:received:received:message-id:date:from:to :subject:mime-version:content-type; bh=+JqkmVt+sHDFIGX5jKp3oP18LQf10VQjAmZAKl1lspY=; b=F87jySDZnMayyitVxLdHcQNL073DytKRyrRh84GNsI24IRNakn0oOfrC2luliNvdea LGTk3adIrzt+N96GyMseWz8T9xE6O/sAI16db48q4Iqkd7uOiDvFsvS3CUQlNhybNw8m CH/o8eELTN0zbSbn5Trp0dkRYXhMX8FTAwrH0=
Domainkey-Signature: a=rsa-sha1; c=nofws; d=gmail.com; s=gamma; h=message- id:date:from:to:subject:mime-version:content-type; b=wkbBj0M8NCUlboI6idKooejg0sL2ms7fDPe1tHUkR9Ht0qr5lAJX4q9PMVJeyjWalH 36n4qGLtC2euBJY070bVra8IBB9FeDEW9C35BC1vuPT5XyucCm0hulbE86+uiUTXCkaB 6ykquzQGCer7xPAcMJqVfXDkHo3H61HM9oCQM=
Message-Id: <c8f49cec0807011530k11196ad4p7cb4b9420f2ae752@mail.gmail.com>
Mime-Version: 1.0
Content-Type: multipart/alternative; boundary="----=_Part_3927_12044027.1214951458678"
X-Spam-Status: score=3.7 tests=DNS_FROM_RFC_POST, HTML_00_10, HTML_MESSAGE, HTML_SHORT_LENGTH version=3.1.7
X-Spam-Level: ***
Message Body: This is a KnowledgeBase article that provides information on how to find email headers and use the data to trace a email.
```



## Q2) File Carving

Perform file carving. Download the file from the link

https://cfreds-archive.nist.gov/FileCarving/Images/L1_Documents.dd.bz2

Use bunzip2 or other utilities such as 7Zip to uncompress the file and get the file L1_Documents.dd This file contains document files of any or all of the following types :

`DOC, XLS, PPT, PDF`


Use an appropriate file recovery tool to recover files from the image file.



## Q3) File Recovery

This exercise makes use of a compressed dd image used to test metadata based deleted file recovery forensic tools. Metadata based deleted file recovery uses residual metadata left behind after a file is deleted to attempt to reconstruct the file. These images are not for testing file carving tools (tools that scan unallocated blocks to find file headers and trailers and then reconstructing deleted files).

Recover one non-fragmented file from the following NTFS image.

https://cfreds-archive.nist.gov/dfr-images/dfr-01-ntfs.dd.bz2

Use bunzip2 or other utilities to get the dd file.

