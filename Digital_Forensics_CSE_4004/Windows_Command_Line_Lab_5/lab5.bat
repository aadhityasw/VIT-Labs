@ECHO OFF
:: BATCH FILE FOR LAB 5 EXPERIMENT
TITLE Lab 5 Experiment

:: SECTION 1
ECHO ==========================
ECHO Current IPv4 address
ECHO ==========================
ipconfig | findstr IPv4

:: SECTION 2
ECHO ==========================
ECHO Current Date and Time
ECHO ==========================
for /F "tokens=2" %%i in ('date /t') do set mydate=%%i
set mytime=%time%
ECHO Current Date is %mydate%
ECHO Current Time is %mytime%

:: SECTION 3
ECHO ==========================
ECHO ARP Table
ECHO ==========================
arp -a

:: SECTION 4
ECHO ================================
ECHO Network Connection Information
ECHO ================================

ECHO Pinging Our Router
ECHO --------------------
for /F "tokens=14" %%i in ('"ipconfig | findstr IPv4"') do SET LOCAL_IP=%%i
ping %LOCAL_IP%
ECHO --------------------

ECHO Hostname
ECHO --------------------
hostname
ECHO --------------------

ECHO IP Configuration
ipconfig
ECHO --------------------

ECHO Mac Address of Network Adapters
getmac
ECHO --------------------

ECHO ============================================

PAUSE
