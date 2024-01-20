/*
  Traffic light sketch for Arduino UNO R3
  version: 0.2
  date: 20.01.2023
  Developer: Valeriy Chernobrovyi (chernobrovyivs)
*/
byte LEDcounter = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(1, OUTPUT); // Red light
  pinMode(2, OUTPUT); // Yellow light
  pinMode(3, OUTPUT); // Green light

  digitalWrite(1, 0);
  digitalWrite(2, 0);
  digitalWrite(3, 0);

  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(LEDcounter <= 3){
    switch(LEDcounter){
      case 0:
        digitalWrite(1, 0);
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        break;
      case 1:
        digitalWrite(1, 1);
        digitalWrite(2, 0);
        digitalWrite(3, 0);

        Serial.println("Red light.");
        break;
      case 2:
        digitalWrite(1, 0);
        digitalWrite(2, 1);
        digitalWrite(3, 0);

        Serial.println("Yellow light.");
        break;
      case 3:
        digitalWrite(1, 0);
        digitalWrite(2, 0);
        digitalWrite(3, 1);

        Serial.println("Green light.");
        break;
      default:
        digitalWrite(1, 0);
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        break;
    }

    LEDcounter++;
    delay(2000);
  }

  if(LEDcounter > 3){
    LEDcounter = 0;
    Serial.println("Переменная LEDcounter == 0!");
    delay(2000);
  }
}
