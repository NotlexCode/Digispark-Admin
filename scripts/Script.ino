#include "DigiKeyboard.h"

void setup() {
  DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_RIGHT); //Open "Run" window
  DigiKeyboard.delay(270);  
  DigiKeyboard.print("cmd"); //Enter here any programm or command you want to execute
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT | MOD_SHIFT_LEFT); //This will run script as administrator
  DigiKeyboard.delay(2000);  
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT); //This is used to confirm running as administrator on Win10/11
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
void loop() {
  //Blinking after script execution
  digitalWrite(1, HIGH);   
  delay(500);    
  digitalWrite(1, LOW); 
  delay(500); 
}
