#include <Servo.h>

Servo thumb;
Servo index;
Servo middle;
Servo ring;
Servo pinky;

int potPin = A1;

int valPotPin;

void setup() {
  thumb.attach(3);
  index.attach(5);
  middle.attach(6);
  ring.attach(9);
  pinky.attach(11);
}

void loop() {
  valPotPin = analogRead(potPin);
  valPotPin = map(valPotPin, 0, 1023, 0, 180);
  thumb.write(valPotPin);
  index.write(valPotPin);
  middle.write(valPotPin);
  ring.write(valPotPin);
  pinky.write(valPotPin);
  delay(15);

}
