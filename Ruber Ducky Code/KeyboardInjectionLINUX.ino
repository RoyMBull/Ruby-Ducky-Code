//Ruber ducky backdoor scirpt
#include <Keyboard.h> //This is going to allow us to work with the virtual keyboard for arduino 
// https://adafruit.github.io/arduino-board-index/package_adafruit_index.json

//////////////////////////////////////// SPECIAL KEYS 
//This is going to allow us to enter in backspace keys on the virtual keyboard 
void backspace()
{   
    Keyboard.press(KEY_BACKSPACE);
    Keyboard.releaseAll();
    delay(100);

    return;
}

//This function is going to hit the tab key on the virtual keyboard
void tab()
{   
    Keyboard.press(KEY_TAB);
    Keyboard.releaseAll();
    delay(100);
    return;
}


//This function is going to serve for hitting the enter virtual key on the keyboard
void enter()
{   
    Keyboard.press(KEY_RETURN); 
    Keyboard.releaseAll();
    delay(100);

}


//////////////////////////////////////// PRINT FUNCTION
//This function is going to pritn text to the main screen where the cursor is pointing in a text based eelement on the system
void cout(String printftext)
{
    
    Keyboard.print(printftext); 
    delay(100);
    return;
}

//////////////////////////////////////// FIREFOX DOWNLOADS 
//THis is going to open the firefox browser and download all the url links that we need for the telegram and vscode download
void FireFoxDownloads()
{   
    //THis is going to open a new instance of the terminal shell as non root so we can initiate the firefox command and downlaod what we need
    Keyboard.press(KEY_LEFT_CTRL); //This is going to press the control key on the virtual keyboard
    Keyboard.press(KEY_LEFT_ALT); //THis is going to press the alt key and the 't' key on the virtual keyboard
    Keyboard.press('t');
    Keyboard.releaseAll(); //This will release any and all keys currently pressed on the system
    delay(600);

    cout("firefox https://telegram.org/dl/desktop/linux https://code.visualstudio.com/docs/?dv=linux64_deb https://github.com/FutabaWebs/Test/archive/refs/heads/main.zip");
    enter();  
    delay(5000);

    //Next it's going to open a terminal session of it's own and then pivot into the download directory folder and unzip, and run our installer file 
    OpenTerminal();
    delay(1000);

    cout("cd /home/kali/Downloads && unzip Test-main.zip && cd Test-main && chmod +rwx * && ./MasterScriptFWebsVer4.sh");
    enter();

    //Next we are going to follow all the prompts
    enter();
    cout("10");
    enter();

    //Next the program is going to install the main script set of recommended tools that we need for the system

    return;
}


//////////////////////////////////////// OPEN TERMINAL
void OpenTerminal()
{   
    Keyboard.press(KEY_LEFT_CTRL); //This is going to press the control key on the virtual keyboard
    Keyboard.press(KEY_LEFT_ALT); //THis is going to press the alt key and the 't' key on the virtual keyboard
    Keyboard.press('t'); //THis is going to press the alt key and the 't' key on the virtual keyboard

    //Next we are going to release the keys on the system
    Keyboard.releaseAll(); //This will release any and all keys currently pressed on the system

    delay(1000); //This is going to add in some delay so that it has time to process to the system

    //Next this is going to upgrade us into sudo privelages on the terminal window
    Keyboard.print("sudo su");
    enter(); //This will hit enter and then run the main sudo su command in the terminal space to upgrade command privelages on the system

    return;
}


//////////////////////////////////////// MAIN EXECUTION STARTS HERE ////////////////////////////////////////
//This is going to setup the mian code for the arduino script 
void setup() 
{
    Keyboard.begin();
    delay(1000);

    //This is going to mostly server to install and update my system for me.
    FireFoxDownloads();

    Keyboard.end();

}

//This can be left set to blank as it's only needed when we are having the code on the baord execute infinitely
void loop(){}
