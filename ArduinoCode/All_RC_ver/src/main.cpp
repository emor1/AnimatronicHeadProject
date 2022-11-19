#include <Arduino.h>
#include "Servo.h"

#define NUMBER 7

// サーボの宣言
Servo EyeVertical_Left;
Servo EyeVertical_Right;
Servo EyeHorizontal_Left;
Servo EyeHorizontal_Right;

Servo EyeBlinkLeft;
Servo EyeBlinkRight;
Servo Jaw;


// 角度の変数
unsigned char angle;
int data;
bool test=false;

void setup() {
  // put your setup code here, to run once:
  EyeHorizontal_Left.attach(6);
  EyeHorizontal_Right.attach(7);
  EyeVertical_Left.attach(8);
  EyeVertical_Right.attach(9);

  EyeBlinkLeft.attach(10);
  EyeBlinkRight.attach(11);
  Jaw.attach(12);

  EyeHorizontal_Left.write(90);
  EyeHorizontal_Right.write(90);
  EyeVertical_Left.write(90);
  EyeVertical_Right.write(90);
  Serial.begin(115200);

  pinMode(13, OUTPUT);
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
      // 追加
      EyeBlinkLeft.write(data[4]);
      EyeBlinkRight.write(data[5]);
      Jaw.write(data[6]);

      Serial.flush();
      Serial.println("e");
    }
  }

  else{
    digitalWrite(13, LOW);
  }
}