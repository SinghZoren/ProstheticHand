#include<Servo.h>

int thumbbtn = 2;
int indexbtn = 4;
int middlebtn = 7;
int ringbtn = 8;
int pinkybtn = 11;

int thumbangle = 0;
int indexangle = 0;
int middleangle = 0;
int ringangle = 0;
int pinkyangle = 0;

Servo thumb;
Servo index;
Servo middle;
Servo ring;
Servo pinky;

int thumbbtnState;
int indexbtnState;
int middlebtnState;
int ringbtnState;
int pinkybtnState;

int lastthumbbtnState;
int lastindexbtnState;
int lastmiddlebtnState;
int lastringbtnState;
int lastpinkybtnState;

void setup() {
  Serial.begin(9600);
  pinMode(thumbbtn, INPUT_PULLUP);
  pinMode(indexbtn, INPUT_PULLUP);
  pinMode(middlebtn, INPUT_PULLUP);
  pinMode(ringbtn, INPUT_PULLUP);
  pinMode(pinkybtn, INPUT);
  
  thumb.attach(3);
  index.attach(5);
  middle.attach(6);
  ring.attach(9);
  pinky.attach(10);
  
  thumb.write(thumbangle);
  index.write(indexangle);
  middle.write(middleangle);
  ring.write(ringangle);
  pinky.write(pinkyangle);
  
  thumbbtnState = digitalRead (thumbbtn);
  indexbtnState = digitalRead (indexbtn);
  middlebtnState = digitalRead (middlebtn);
  ringbtnState = digitalRead (ringbtn);
  pinkybtnState = digitalRead (pinkybtn);
}
void loop() {
  
  lastthumbbtnState = thumbbtnState;
  lastthumbbtnState = digitalRead(thumbbtn);

  if(lastthumbbtnState == HIGH && thumbbtnState == LOW) {
    delay(50);
  	Serial.println("The thumb button is pressed");
    
    if(thumbangle == 0)
      thumbangle = 180;
    else
    if(thumbangle == 180)
      thumbangle = 0;
    
     thumb.write(thumbangle);
  }
  
  lastindexbtnState = indexbtnState;
  lastindexbtnState = digitalRead(indexbtn);
  
  if(lastindexbtnState == HIGH && indexbtnState == LOW) {
    delay(50);
  	Serial.println("The tindex is pressed");
    
    if(indexangle == 0)
      indexangle = 180;
    else
    if(indexangle == 180)
      indexangle = 0;
    
     index.write(indexangle);
  }
  
  lastmiddlebtnState = middlebtnState;
  lastmiddlebtnState = digitalRead(middlebtn);
  
  if(lastmiddlebtnState == HIGH && middlebtnState == LOW) {
    delay(50);
  	Serial.println("The middle is pressed");
    
    if(middleangle == 0)
      middleangle = 180;
    else
    if(middleangle == 180)
      middleangle = 0;
    
     middle.write(middleangle);
  }
  
  lastringbtnState = ringbtnState;
  lastringbtnState = digitalRead(ringbtn);
  
  if(lastringbtnState == HIGH && ringbtnState == LOW) {
    delay(50);
  	Serial.println("The ring is pressed");
    
    if(ringangle == 0)
      ringangle = 180;
    else
    if(ringangle == 180)
      ringangle = 0;
    
     ring.write(ringangle);
  }
  
  lastpinkybtnState = pinkybtnState;
  lastpinkybtnState = digitalRead(pinkybtn);
  
  if(lastpinkybtnState == HIGH && pinkybtnState == LOW) {
    delay(50);
  	Serial.println("The pinky is pressed");
    
    if(pinkyangle == 0)
      pinkyangle = 180;
    else
    if(pinkyangle == 180)
      pinkyangle = 0;
    
     pinky.write(pinkyangle);
  }
}