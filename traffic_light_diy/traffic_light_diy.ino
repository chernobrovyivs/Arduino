/*
  Traffic light sketch for Arduino UNO R3
  version: 0.3
  date: 20.01.2023
  Developer: Valeriy Chernobrovyi (chernobrovyivs)
*/
byte LEDcounter = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // Red light
  pinMode(3, OUTPUT); // Yellow light
  pinMode(4, OUTPUT); // Green light

  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);

  Serial.begin(9600);
}

void loop() {
  LEDcounter = 2;
  while(LEDcounter <= 4){
    switch(LEDcounter){
      case 2:
        digitalWrite(2, 1);
        digitalWrite(3, 0);
        digitalWrite(4, 0);

        Serial.println("Red light.");
        break;
      case 3:
        digitalWrite(2, 0);
        digitalWrite(3, 1);
        digitalWrite(4, 0);

        Serial.println("Yellow light.");
        break;
      case 4:
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        digitalWrite(4, 1);

        Serial.println("Green light.");
        break;
      default:
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        digitalWrite(3, 0);
        break;
    }

    LEDcounter++;
    delay(2000);
  }

  if(LEDcounter > 4){
    LEDcounter = 0;
    Serial.println("Переменная LEDcounter == 0!");
    delay(2000);
  }
}
