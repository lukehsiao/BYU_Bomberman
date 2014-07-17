====================================================================================
IMMERSE ECEn Display: Bomberman!
====================================================================================
    Version 1.0
    Release date: 23 June 2014
------------------------------------------------------------------------------------
PROJECT STATE:

    Released
------------------------------------------------------------------------------------
CREDITS:

    Luke Hsiao (lukehsiao@byu.edu)
    Thomas Townsend (thomastownsend523@gmail.com)
    Alex Lin (linjiapuzi1994@hotmail.com)
    MaKey MaKey team from www.makeymakey.com
------------------------------------------------------------------------------------
PROJECT DESCRIPTION:
    
    This project was created to serve as a new Computer Engineering-focused display
    for new student orientation, SOAR, major fairs, etc.  It provides a fun, 
    interactive way to learn about circuits, I/O, and processing.  It connects the
    real world to a digital one in a clever way.
    
    This project is teaching about Computer Interfaces.  It involves low-level hardware
    and signal processing, high-level operating systems and software, and allows
    students to see how they can create powerful systems with computers.
    
    We use a MaKeyMaKey board to allow students to create their own "controllers"
    to use with the game, and then use this as input to our Raspberry Pi, which 
    runs Bombermaaan and outputs to the display.
    
    How to play:
     ● Grab the Bomberman Cart + Posters
     ● Plug it in
     ● Hook up all the controllers
     ● Play!
     ● When you're done, shutdown the Pi before unplugging the cart. (Instructions below).
------------------------------------------------------------------------------------
DEPENDANCIES:

    The only hard dependencies are:
        ● Requires the Bomberman Cart, Posters, and Controllers.
        ● Make sure that the area the display will be has a power plug.
        ● 6 Fruit if you're using the nail-bed fruit controller.  We recommend Clementine. 
    
    If you want to make modifications, we'd recommend using Windows. When modifying,
    additional dependencies are:
        ● Requires Makey Makey Drivers for Windows
        ● Requires Arduino ISE
        ● Requires Makey Makey plug-in for Arduino to reprogram
        
    Note that it is not suggested that you make modifications to the MakeyMakey,
    but all of the necessary files and instructions can be found at:
    https://learn.sparkfun.com/tutorials/makey-makey-advanced-guide
------------------------------------------------------------------------------------
DOCUMENTATION:

    The idea behind this project is to get the most fun, most interactive display
    we could think of that involves computer engineering specifically.  The Makey
    Makey has a maximum of 18 inputs (6 on front, 12 on back).  Bombermaaan requires
    each player to have 6 keys for controls (up/down/left/right/action1/action2).
    So, this is why we created it for 3 simultaneous players.  It's plug-and-play.
    Grab this MakeyMakey setup, connect everything, power up, and Bomberman will
    automatically launch on startup.  Make sure to shutdown the RaspberryPi properly
    before unplugging the cart.
------------------------------------------------------------------------------------
INSTALLATION INSTRUCTIONS:

    All of the necessary source files/code has been included in this GitHub repository. 
    It is completely self-contained and will not require any updating.
    However, if you want additional references:
        Reprogramming MakeyMakey: https://learn.sparkfun.com/tutorials/makey-makey-advanced-guide/all
        Download Bombermaaan: http://bombermaaan.sourceforge.net/
        
    ---
    Supplies Needed:
        [1x] Bomberman Card (includes MakeyMakey + Raspberry Pi + Speakers, etc)
        [3x] Controls for each player
                - This mean 6 conductive objects/drawings/etc to use as controls
                - If you use the fruit controller, you need fruit to use.
        [1x] Keyboard to restart games each round and shutdown the RaspberryPi.
    
    Controller Layout:
        The Bombermaaan game's control layout is very intuitive.  To help in selecting
        materials, you should realize the controller layout is as shown below:
        
                ▲
             ◄  ▼  ►    [Action1] [Action2]
        
        So, don't use anything too bulky or it won't be fun. Materials we've found 
        effective are: playdoh, coins, oranges(or other fruit).
        Good ways to get all the players grounded to the same ground are (1) use grounding
        wristbands we commonly have in the shop, (2) place a strip of metal tape or
        tin foil on the table where they all rest their wrists.
        
        The creativity with which you layout the controls is the key to the demo.
    
    To Set Up:
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
        
    To Play the Game:
        Bomberman will automatically launch on startup.  Use the keyboard to navigate.
        Note that you can go full-screen by pressing F3 or windowed by pressing F4.
        Select "Game" in the menu by hitting enter.  Turn the first 3 Bombers to "man",
        the fourth to "com" and the last one off.  In the next screen, make sure the
        first bomber is Keyboard 5, the second bomber is Keyboard 2, and the third bomber
        is Keyboard 3.  The next screens allow you to adjust how many battles in a match,
        how long of normal game time there is, and how much of "hurry" gametime there is.
        We recommend (for demo purposes) Battle = 1, Start = 2:00, and Hurry = 0:35.
        In the following screen, you can select whichever level you'd like. We'd
        recommend L3.txt.  We've already configured this once, so unless you change it,
        you'll just be able to use the settings as is.
        
        To shutdown the Raspberry Pi, exit from the Bomberman game to the Raspbian desktop.
        Then, press Ctrl+Alt+D and use the arrow keys to navigate to LXTerminal and launch it.
        Run "sudo shutdown -h now".  Wait for the blinking cursor on the top left of the
        screen to disappear before unplugging the cart.
------------------------------------------------------------------------------------
ADDITIONAL NOTES:

    ● Do NOT install the USB drivers with the Arduino ISE!  It will conflict with 
        the MakeyMakey drivers and cause problems during reprogramming.
    ● Bombermaaan will NOT open if there is no sound device detected.
        - If you need to debug Bombermaaan, see log.txt in the Bombermaaan_1.4.0 folder
        - More debugging information can be found at http://bombermaaan.sourceforge.net/faq.php
        - This means on some computers, it will not open w/o headphones or speakers plugged in.
    ● To Reprogram the MakeyMakey
        - open makey_makey_1_4_1.ino in Arduino ISE and edit the array in settings.h
        - See the link in Installation Instructions for details.
        - Remember, unless you absolutely want to change this demo, DO NOT REPROGRAM THE MAKEYMAKEY.
    ● On the software side, no real enhancements can help much. Where the real enhancements and 
      creativity can come is on how the actual demo is set up, the cleverness of the controllers,
      etc.  Spend the effort in making that cool!
    ● Clever trick: if you using a sketched circuit, cut a slit in the paper and draw leads to that
      This way, the clips are hidden from view and out of the way.  
      
            [top of paper hiding cords]
            -------------------------
            [leads drawn to the slit]
      
                ▲
             ◄  ▼  ►    [Action1] [Action2]
             
    ● On Linux, we needed to compile from source code.  We needed to install:
        - sudo apt-get update
        - sudo apt-get install libsdl-mixer1.2-dev
        - sudo apt-get install libsdl1.2-dev
        - Download the source files "Bombermaaan_1.3.2.557e_20081004_src.tar.gz".
        - Extract to a folder.
        - Edit the backslash variable in winreplace.cpp[95] into const char* rather than the original char*
        - Download additional RES/RES32 files from DevelTools on sourceforge ("Bombermaaan_1.3.2.572e_20081006_res.tar.gz").
        - Extract and copy them into the folder you placed the original source files in.
        - Change to the new directory and type make
        - Ensure you have some level files in the ./Bombermaaan/Levels directory (may need to download separately).
        - Change to directory ./Bombermaaan and type LD_LIBRARY_PATH=../RESGEN ./Bombermaaan to run.
    ● If the RaspberryPi is not properly shutdown, its SD card may be corrupted.
        - You can simply use Win32DiskImager to load the "PiBackup" image onto the 8GB SD card
          which you can download at www.immerse.byu.edu/Bomberman/PiBackup
        - Or, if you want to go from scratch..
            - First install the latest version of Raspian
            - Download the source files in Bombermaaan/
            - Follow instructions in previous bullet to compile from Source
            - Open a terminal and run mkdir ~/.config/autostart
            - Then, run touch ~/.config/autostart/Bomberman.desktop
            - Then, open Bomberman.desktop and paste in the following:
                  [Desktop Entry]
                  Version=1.0
                  Type=Application
                  Name=Bomberman
                  Exec=./Bomberman.sh
                  Path=/home/pi
                  Terminal=false
                  StartupNotify=false
           - Finally, create a Bomberman.sh and place it in /home/pi and paste in:
                  echo "Opening Bomberman..."
                  cd /home/pi/Bombermaaan_Linux/Bombermaaan/Bombermaaan/
                  LD_LIBRARY_PATH=../RESGEN ./Bombermaaan
           - This requires that the source files are placed in the "Bombermaaan_Linux" folder
             in home/pi/ and it is already compiled.
    ● BUG: It turns out that people's skin have different conductivity.  That means that sometimes,
      our ground straps did not work properly when placed on a wrist or arm compared to the
      sweat-gland-dense palm.  This is a issue we must resolve so that regardless of skin type,
      the grounding works.
    ● Make sure the monitor is set to the correct input.  It's default is VGA 
      rather than DVI.
     
------------------------------------------------------------------------------------
FUTURE UPGRADES:

    ● It would be more convenient if the Raspberry Pi automatically shutdown when
      Bomberman is closed.  
    ● You could make new alligator clip controller cables so they could hook up to anything.
    ● You could reprogram the MakeyMakey to use capacitive sensing so no grounding is needed.
    ● Create a custom BYU level for Bomberman.
