#include <Arduino.h>
#include "Servo.h"

#define NUMBER 4

// サーボの宣言
Servo EyeVertical_Left;
Servo EyeVertical_Right;
Servo EyeHorizontal_Left;
Servo EyeHorizontal_Right;

// 角度の変数
unsigned char angle;
int data;
bool test=false;

void setup() {
  // put your setup code here, to run once:
  EyeHorizontal_Left.attach(6);
  EyeHorizontal_Right.attach(5);
  EyeVertical_Left.attach(4);
  EyeVertical_Right.attach(3);

  EyeHorizontal_Left.write(90);
  EyeHorizontal_Right.write(90);
  EyeVertical_Left.write(90);
  EyeVertical_Right.write(90);
  Serial.begin(9600);
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
      
      EyeHorizontal_Left.write(data[0]);
      EyeHorizontal_Right.write(data[1]);
      EyeVertical_Left.write(data[2]);
      EyeVertical_Right.write(data[3]);

      Serial.flush();
    }
  }
}