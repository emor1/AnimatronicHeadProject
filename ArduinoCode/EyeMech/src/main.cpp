#include <Arduino.h>
#include "Servo.h"

#define NUMBER 2

// サーボの宣言
Servo Eyeball_Left;
Servo Eyeball_Right;


// 角度の変数
unsigned char angle;
int data;
bool test=false;

void setup() {
  // put your setup code here, to run once:
  Eyeball_Left.attach(4);
  Eyeball_Right.attach(3);

  Eyeball_Left.write(90);
  Eyeball_Right.write(90);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  int data[NUMBER] = {0};

  if (Serial.available() > NUMBER)
  {
    if(Serial.read()=='a'){
      for(int i=0;i<NUMBER;i++){
        data[i] = int(Serial.read());
      }
    
      Eyeball_Left.write(data[0]);
      Eyeball_Right.write(data[1]);

      Serial.flush();
    }
  }
}