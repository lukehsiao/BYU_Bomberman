## IMMERSE ECEn Display: Bomberman! ##

[![Join the chat at https://gitter.im/lukehsiao/BYU_Bomberman](https://img.shields.io/gitter/room/nwjs/nw.js.svg?style=flat)](https://gitter.im/lukehsiao/BYU_Bomberman?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)
[![Waffle.io](https://img.shields.io/waffle/label/lukehsiao/byu_bomberman/ready.svg?style=flat)](https://waffle.io/lukehsiao/byu_bomberman)

Version: 1.0.1<br>
Original Release date: 23 June 2014<br>
Updated: 29 August 2014<br>
Landing Page: http://lukehsiao.github.io/BYU_Bomberman/
        
### What is this repository for? ###

This project was created to serve as a new Computer Engineering focused
display for use in new student orientation, SOAR, major fairs, etc. It provides
a fun, interactive way to learn about circuits, I/O, and processing.  It
connects the real world to the digital world in a clever way.

We hope to teach about computer interfaces.  Bomberman involves low-level
hardware and signal processing, high-level operating systems and software,
and allows students to see how they can create powerful systems with computers.

We us a MaKeyMaKey board to enable students to create their own "controllers"
to use with the game, and then use them as input to our Raspberry Pi, which
runs Bombermaaan and outputs to the display.

We've created this GitHub repository so that issues can be easily tracked,
source code is readily available, and improvements can be made efficiently.

### How do I run this thing? ###

1. Grab the Bomberman Cart, Posters, and Easels. 
2. Plug in the black power cord built into the cart (bomberman will auto-open).
3. Hook up all the controllers.
4. Make sure Bomberman is configured correctly (see below for details.)
5. Play!
6. When finished, clean up cart/controllers.
7. Shutdown the Pi BEFORE unplugging the cart (instructions below).


### I want some nitty-gritty details. ###

All of the necessary files/code has been included in this GitHub repo.  It is
completely self-contained and will not require any updating.  However, if you
want additional references:
* Reprogramming MakeyMakey: https://learn.sparkfun.com/tutorials/makey-makey-advanced-guide/all
* Download Bombermaaan: http://bombermaaan.sourceforge.net/

#### Controller Layout ####
The Bombermaaan game's control layout is very intuitive.  To help in selecting
materials, you should realize the controller layout is as shown below:

        ▲
     ◄  ▼  ►    [Action1] [Action2]

So, don't use anything too bulky or it won't be fun. Materials we've found 
effective are: Play-Doh, coins, potatoes/carrots (cut in half so they don't wobble).
Good ways to get all the players grounded to the same ground are (1) use grounding
wristbands we commonly have in the shop, (2) place a strip of metal tape or
tin foil on the table where they all rest their wrists.

The creativity with which you layout the controls is the key to the demo.

#### Detailed Setup: ####
Unless you are changing something, you will NOT need to install anything.
Simply plug in the Bomberman cart and wire up the controllers.
The MakeyMakey's outputs have been programmed to match the default controls
of Bombermaaan 1.4.0.  So, to wire up the game properly, simply wire it as
follows.  The tables show the game control, the corresponding MakeyMakey pin
and the actual key that the MakeyMakey pin will output.

    Player 1:
        Must use KEYBOARD 5
        Control |   MakeyMakey Input    | Actual Key
        --------+-----------------------+------------
        UP      |   UP                  | Up arrow
        DOWN    |   DOWN                | Down arrow
        LEFT    |   LEFT                | Left arrow
        RIGHT   |   RIGHT               | Right arrow
        ACTION1 |   SPACE               | Right CTRL
        ACTION2 |   LEFTCLICK           | Right Shift
    
    Player 2:
        Must use KEYBOARD 2
        Control |   MakeyMakey Input    | Actual Key
        --------+-----------------------+------------
        UP      |   D5                  | r
        DOWN    |   D4                  | f
        LEFT    |   D3                  | d
        RIGHT   |   D2                  | g
        ACTION1 |   D1                  | 2
        ACTION2 |   D0                  | 1
        
    Player 3:
        Must use KEYBOARD 3
        Control |   MakeyMakey Input    | Actual Key
        --------+-----------------------+-------------
        UP      |   A5                  | i
        DOWN    |   A4                  | k
        LEFT    |   A3                  | j
        RIGHT   |   A2                  | l
        ACTION1 |   A1                  | 8
        ACTION2 |   A0                  | 7

Note that if either the MakeyMakey is reprogrammed or Bombermaaan options are
changed, it will no longer work.

The cables that connect the controllers to the Bomberman cart are custom made from ribbon cable and 6-pin female molex connectors. The assignments of the pins on the cable are shown in the image below:
![Molex Pin Assignments](/resources/cable_assignments.jpg "Molex Pin Assignments")

####How do I set up the Pi to shut down automatically after Bombermaaan is closed?
1. Copy the scripts folder in this repository and its contents to the /home/pi by using "sudo cp -r <path to scripts folder> /home/pi"
2. Open up a terminal session and type "sudo crontab -e". The root user's crontab file should open. 
3. In the nano text editor that opens up, after the comments, type "* * * * * /home/pi/scripts/bombermaaancheck.sh". This will set crontab to run the script every minute, on the minute.
4. Type ctrl+x and then y, and press enter. The cron job entry will be saved.
5. The next wallclock minute after you exit bombermaaan, the raspberry pi will shut down.

#### How do I manually shutdown the Pi without a mouse? ####
1. Exit from the Bomberman game to the Rasbian desktop (hit ESC).
2. Press Ctrl+Alt+D and use the arrow keys to move to LXTerminal and open it.
3. Type "sudo shutdown -h now" and hit enter.
4. Wait for the blinking cursor on the top left of the screen to disappear.

### Additional Notes: ###
* Do NOT install the USB drivers with the Arduino ISE!  It will conflict with 
  the MakeyMakey drivers and cause problems during reprogramming.
* Bomberman will NOT open if there is no sound device detected
   * This means on some computers, it will not open w/o headphones or speakers
   plugged in.
   * More debugging info can be found at http://bombermaaan.sourceforge.net/faq.php
* To reprogram the MaKeyMaKey
   * open makey_makey_1_4_1.ino in Arduino ISE and edit the array in settings.h
   * Remember, unless you absolutely want to change this demo, DO NOT REPROGRAM 
   THE MAKEYMAKEY.
* On the software side, no real enhancements can help much. Where the real 
enhancements and creativity can come is on how the actual demo is set up, the 
cleverness of the controllers, etc.  Spend the effort in making that cool!
* On Linux, we needed to compile from source code.  We needed to install:
   * sudo apt-get update
   * sudo apt-get install libsdl-mixer1.2-dev
   * sudo apt-get install libsdl1.2-dev
   * Download the source files "Bombermaaan_1.3.2.557e_20081004_src.tar.gz"
   * Extract to a folder
   * Edit the backslash variable in winreplace.cpp[95] into const char* rather 
   than the original char*
   * Download additional RES/RES32 files from DevelTools on sourceforge 
   ("Bombermaaan_1.3.2.572e_20081006_res.tar.gz")
   * Extract and copy them into the same folder you placed the source files in
   * Change to the new directory and type make
   * Ensure you have some level files in the ./Bombermaaan/Levels directory 
   (may need to download separately)
   * Change to directory ./Bombermaaan and type 
   LD_LIBRARY_PATH=../RESGEN ./Bombermaaan to run
* If the RaspberryPi is not properly shutdown, its SD card may be corrupted.
   * You can simply use Win32DiskImager to load the "PiBackup" image onto the 
   8GB SD card which you can download at http://www.immerse.byu.edu/InteractiveDisplays/Bomberman/PiBackup
   * Or, if you want to go from scratch..
        * First install the latest version of Raspian
        * Download the source files in Bombermaaan/
        * Follow instructions in previous bullet to compile from Source
        * Open a terminal and run mkdir ~/.config/autostart
        * Then, run touch ~/.config/autostart/Bomberman.desktop
        * Then, open Bomberman.desktop and paste in the following:
             
             ```
              [Desktop Entry]
              Version=1.0
              Type=Application
              Name=Bomberman
              Exec=./Bomberman.sh
              Path=/home/pi
              Terminal=false
              StartupNotify=false
              ```
       * Finally, create a Bomberman.sh and place it in /home/pi and paste in:
              
              ```
              echo "Opening Bomberman..."
              cd /home/pi/Bombermaaan_Linux/Bombermaaan/Bombermaaan/
              LD_LIBRARY_PATH=../RESGEN ./Bombermaaan
              ```
       * This requires that the source files are placed in the 
       "Bombermaaan_Linux" folder in home/pi/ and it is already compiled.
* Make sure the monitor is set to the correct input.  It's default is VGA 
  rather than DVI.
  
### Future Work: ###
* You could make new alligator clip controller cables so they could hook up to
anything.
* You could reprogram the MaKeyMaKey to use capacitive sensing so that no ground
wrist straps were necessary.
* Create a custom BYU-logo level for Bomberman.
* Edit the Bombermaaan source code to:
  * Include BYU Images
  * Not have such a long wait timer after a "victory".
  * Automatically return to the level selection page after a match.
* Create a well-made video of the display at work and add to the landing page.

### Who do I talk to? ###

This display was originally created in the summer of 2014 by:
* Luke Hsiao
* Thomas Townsend
* Alex Lin

We also would like to give special thanks to:
* MaKey MaKey team from www.makeymakey.com
* The creators of Raspberry Pi
