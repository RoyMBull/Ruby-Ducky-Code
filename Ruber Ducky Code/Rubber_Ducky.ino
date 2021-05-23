#include <Keyboard.h>


 //-> Types/ enters multiple keys (used for executing shortcuts)
         void KeyCombination(uint8_t holdkey, uint8_t targetkey)
        {
            Keyboard.press(holdkey); //press will press the key
            delay(100);
            Keyboard.press(targetkey);
            delay(100);
            Keyboard.releaseAll(); //release multiple keys pressed
            delay(100);
        }

//-> Runs a Program via the path 
        void RunProg(String Program)
        {
            KeyCombination(KEY_LEFT_GUI, 'r'); //Opens the run prompt
            Keyboard.print(Program); //Program to run 
            delay(100);
            uint8_t SingleKey = KEY_RETURN;
            Keyboard.press(SingleKey);
            delay(100);
            Keyboard.release(SingleKey); //release for singular keys
            delay(100);
            
            Keyboard.print("Hello World");
            delay(100);
            Keyboard.press(KEY_RETURN);
            delay(100);
            Keyboard.release(KEY_RETURN);
            delay(100);
           
        }


//-> Runs Cmd Prompt (REFERENCE THE RunProg() )
        void Cmd()
        {
            RunProg("cmd");
            //Enters commands into the terminal for use 
        }
        
//Virtual keyboard functions

   //-> Closes the virtual keyboard 
        void CloseVirtualKeyboard()
        {
            Keyboard.end();
        }

    //-> Loads the virtual keyboard
        void OpenVirtualKeyboard()
        {
            Keyboard.begin();
            delay(600);
        }


//Program will open the command prompt without user privelages
void setup()
{
    //Open the virtual keyboard
    OpenVirtualKeyboard();
    delay(100);

    //Open the cmd
    Cmd();
    delay(100);

    //Close the virtual keyboard
    CloseVirtualKeyboard();


}

//Leave empty, but MUST be here
void loop()
{

}