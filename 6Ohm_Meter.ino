#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

int analogPin = A0;    // select the input pin for the potentiometer
int val = 0;  // variable to store the value coming from the sensor
int VolVal = 0;
int OhmVal = 0;

byte OHMS[8]= {
  B00000,
  B01110,
  B10001,
  B10001,
  B10001,
  B01010,
  B11011,
  B00000
};


void setup() {
// declare the ledPin as an OUTPUT:
lcd.begin(16,2);
Serial.begin(9600);
pinMode(analogPin, INPUT);
lcd.setCursor(7,2);
lcd.createChar(0, OHMS);  
}

void loop() {
  // read the value from the sensor:

 int val= analogRead (analogPin);
 
 
 float VolVal = val*(5.0/1023.0);
 lcd.print("Voltage:");// print word voltage
 lcd.print(VolVal); //print val 
 lcd.print("V"); //print V after val
 Serial.println (VolVal);
 Serial.println (OhmVal);
 float OhmVal = (220 * ((5/VolVal)-1));
lcd.setCursor(0,1);
lcd.print("OHM:");
lcd.print (OhmVal);
lcd.write(8); 


 delay(500);
 lcd.clear();
}
