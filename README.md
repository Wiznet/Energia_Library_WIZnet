#Energia_Library_WIZnet
This repository is the Enegia IDE which added Ethernet library from Arduino onto.

WIZnet announced their ethernet library for open source hardware platform like Arduino.
This library includes examples which Arduino supplies and drivers for W5100, W5200 and W5500.

##How to install Energia IDE and ethernet library
1. Download new Energia IDE from energia.nu and extract it.
2. Download the latest ethernet library from WIZnet on Github(https://github.com/Wiznet/WIZ_Ethernet_Library.git) 
   and extract it and copy "ethernet" directory into [root directory of Energia IDE]\hardware\msp430\libraries\.
3. Download some header and cpp files from WIZnet's wizwiki.net(http://wizwiki.net/wiki/lib/exe/fetch.php?media=osh:ioshield-l:updatelib:additional_files_from_arduino.zip)
   and add those files to [root directory of Energia]\hardware\msp430\cores\msp430\
4. Add bool() function to HardwareSerial.cpp and HardwareSerial.h

Now, if you run Energia IDE, then you can see "Ethernet" section in Examples and many samples in that section.
![Capture Image](https://github.com/Wiznet/Energia_Library_WIZnet/blob/master/Energia_Capture.jpg "Energia IDE")

Thank you.
