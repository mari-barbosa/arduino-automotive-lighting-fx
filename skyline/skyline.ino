// Skyline Automotive Lighting FX

// Blue LEDs pins (always on)
const int blueLeds[] = {A0, A1, A2, A3, A4, A5};
const int numBlue = sizeof(blueLeds) / sizeof(blueLeds[0]);

// White LEDs pins (sequence)
const int whiteLeds[] = {12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 13};
const int numWhite = sizeof(whiteLeds) / sizeof(whiteLeds[0]);

// Sequence delay
const int delayTime = 2;

void setup() {
  // Configure blue LEDs as output and turn all on
  for (int i = 0; i < numBlue; i++) {
    pinMode(blueLeds[i], OUTPUT);
    digitalWrite(blueLeds[i], HIGH);
  }
  
  // Configure white LEDs as output
  for (int i = 0; i < numWhite; i++) {
    pinMode(whiteLeds[i], OUTPUT);
    digitalWrite(whiteLeds[i], LOW);
  }
}

void loop() {
  // White LEDs sequence - turn on, turn off and move to next
  for (int i = 0; i < numWhite; i++) {
    digitalWrite(whiteLeds[i], HIGH);
    delay(delayTime);
    digitalWrite(whiteLeds[i], LOW);
  }

  delay(30);
}