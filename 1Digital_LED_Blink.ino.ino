int ledPin = 12;   // Led is connected to pin 12

void setup() {
  // put your setup code here, to run once:
  // initialize digital pin ledPin as an output.
pinMode (ledPin,OUTPUT); //Led is used as a output
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);   // LED will turn ON
  delay(1000);                  // wait for a second
  digitalWrite(ledPin, LOW);    // LED will turn OFF
  delay(1000);                  // wait for a second
}
