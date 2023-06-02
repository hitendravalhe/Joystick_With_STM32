#include <Servo.h>
Servo myservo;

int joyX = PA0;
int joyY = PA1;
int servo_attach = PA11;
int val;
void setup() {
  Serial.begin(9600);
  myservo.attach(servo_attach);
}
void loop() {
  int xValue = analogRead(joyX);
  int yValue = analogRead(joyY);
  // Serial.print(xValue);
  // Serial.print("\t");
  // Serial.println(yValue);
  // Serial.print("\t");
  if (xValue > 2800) {
    if (xValue < 3300) {
      if (yValue > 2800) {
        if (yValue < 3300) {
          Serial.println("centre");
          val=0;
        }
      }
    }
  }
  if (xValue > 2800) {
    if (xValue < 3300) {
      if (yValue > 0) {
        if (yValue < 330) {
          Serial.println("up");
           val=45;
        }
      }
    }
  }
  if (xValue > 2800) {
    if (xValue < 3300) {
      if (yValue > 3800) {
        if (yValue < 4096) {
          Serial.println("down");
         val=90;
        }
      }
    }
  }
  if (xValue > 3800) {
    if (xValue < 4096) {
      if (yValue > 2800) {
        if (yValue < 3300) {
          Serial.println("right");
          val=135;
        }
      }
    }
  }
  if (xValue > 0) {
    if (xValue < 300) {
      if (yValue > 2800) {
        if (yValue < 3300) {
          Serial.println("left");
           val = 180;
        }
      }
    }
  }
  myservo.write(val);
  delay(15);
}