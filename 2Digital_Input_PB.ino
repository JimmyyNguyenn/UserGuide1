int ledPin = 12;     // Led is connected to pin 12
int button = 2;      // Botton is connected to pin 2

int buttonState = 0; //button output is currently 0

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin ledPin as an output.
   
pinMode (ledPin,OUTPUT);  // Led pin is used as a output
pinMode (button,INPUT);   // Botton pin is used as a input
}

void loop() {
buttonState = digitalRead(button);  //buttonState is equal to the output of the botton
  
if (buttonState == HIGH){       //if the bottonState is equal to HIGH then it runs this program
  digitalWrite(ledPin, HIGH);   // turn the LED on  
}
else {                         // if buttonState does not equal to HIGH then it runs this program
  digitalWrite(ledPin, LOW);   // turn the LED off 
}
}
