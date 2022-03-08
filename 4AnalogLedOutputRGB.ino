int analogPin = A0;    // select the input pin for the potentiometer
int ledPinR = 11;      // select the pin for the REDLED
int ledPinG = 10;      // select the pin for the GREENLED
int ledPinB = 9;       // select the pin for the BLUELED
int val = 0;           // variable to store the value coming from the sensor 
int BitVal = 0;        // BitVal value will be 0 
int VolVal = 0;        // VolVal value will be 0
int ledPin = 0;        // ledPin value will be 0

void setup() {
  pinMode(ledPin, OUTPUT);        // ledPin as an OUTPUT:  
  pinMode(ledPinR, OUTPUT);       // ledPinR as an OUTPUT:
  pinMode(ledPinG, OUTPUT);       // ledPinG as an OUTPUT:
  pinMode(ledPinB, OUTPUT);       // ledPinB as an OUTPUT:
  pinMode(analogPin, INPUT);      // analogPin as an INPUT:
  Serial.begin(9600);             // connect to the serial port
}

void loop() {
  //read the value from the sensor:
  val = analogRead(analogPin);         //val will read the value coming from alaogPin 
  float VolVal = val * (5.0 / 1023.0); //math calculation to calculate for Voltage 
  Serial.print(VolVal);                //print VolVal on Serial port
  Serial.print("\t");                  //"\t" will make the next serial.print have a space between the previous print
  analogWrite(ledPin, val / 4);        //analogRead values go from 0 to 1023, analogWrite values from 0 to 255 
  Serial.print(val);                   //print val on Serial port
  Serial.print("\t");                  //"\t" will make the next serial.print have a space between the previous print
  float BitVal = val / 4;              //math calculation to calculate for brightness of LED
  Serial.print(BitVal);                //print BitVal on Serial port
  Serial.print("\t");                  //"\t" will make the next serial.print have a space between the previous print
  Serial.print("\n");                  //"\n" will make the next serial.print go under 
  
  if (val>255){                  //if val is greater than 255 ledPinG turns on
analogWrite(ledPinR, val);       //analogWrite values from 0 to 255 
}
  if (val>509){                  //if val is less than 509
    digitalWrite(ledPinR, LOW);  //ledPinR turns off 
}
  if (val<255){                  //if val is less than 255 
    digitalWrite(ledPinR, LOW);  //ledPinR turns off
}
  if (val>510){                  //if val is less than 510 
analogWrite(ledPinG, val);       //analogWrite values from 0 to 255 
}
  if (val>765){                  //if val is greater than 509 
    digitalWrite(ledPinG, LOW);  //ledPinG turns off
}
  if (val<510){                  //if val is less than 510
    digitalWrite(ledPinG, LOW);  //ledPinG turns off 
}
    if (val>766){                //if val is greater than 766 
analogWrite(ledPinB, val);       //analogWrite values from 0 to 255 
}
      if (val<765){              //if val is less than 764
  digitalWrite(ledPinB, LOW);    //ledPinB turns off
}
}
