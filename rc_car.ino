#include <EEPROM.h>
#include<Arduino.h>
#include<ctype.h>
#include<sys/types.h>

const int leftmotorpin1 = 2;
const int leftmotorpin2 = 3;
const int rightmotorpin3 = 4;
const int rightmotorpin4 = 5;
const int movement;
byte eeprom_data;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(leftmotorpin1,OUTPUT);
  pinMode(leftmotorpin2,OUTPUT);
  pinMode(rightmotorpin3,OUTPUT);
  pinMode(rightmotorpin4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    int speed = Serial.parseInt();
    int leftspeed = speed;
    int rightspeed = speed;
    analogWrite(leftmotorpin1,leftspeed);
    analogWrite(leftmotorpin2,0);
    analogWrite(rightmotorpin3,rightspeed);
    analogWrite(rightmotorpin4,0);
    Serial.println(speed);
    for(Serial.begin(9600)=Serial.read(eeprom_data)){
      if(eeprom_data == 1){
        Serial.read($movement,1)
      }
    }    
    switch($movement){
      case 1:
        Serial.read();
    }
  }
}
