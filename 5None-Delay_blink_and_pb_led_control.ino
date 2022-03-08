int ledState = LOW;             // ledState used to set the LED

unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change:
const long interval = 1000;           // interval at which to blink (milliseconds)

int redLed = 12;
int button = 2;

int buttonState = 0;

void setup() {
  // set the digital pin as output:
  pinMode (redLed, OUTPUT);
  pinMode (button, INPUT);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.
  buttonState = digitalRead(button);  //buttonState is equal to the output of the botton
  if (button == HIGH) {
    // check to see if it's time to blink the LED; that is, if the difference between the current time and last time you blinked the LED is bigger than the interval at which you want to blink the LED.
    unsigned long currentMillis = millis();

    if (currentMillis - previousMillis >= interval) {
      // save the last time you blinked the LED
      previousMillis = currentMillis;

      // if the LED is off turn it on and vice-versa:
      if (ledState == LOW) {
        ledState = HIGH;
      } else {
        ledState = LOW;
      }
      digitalWrite(redLed, ledState);
    }
    else {
      digitalWrite(redLed, LOW);//when button is released the light will turn off
    }
  }
}
