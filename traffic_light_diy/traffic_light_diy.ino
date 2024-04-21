/*
  Traffic light sketch for Arduino UNO R3
  version: 0.5.2
  date: 20.01.2023
  modified 20.04.2023
  Developer: Valeriy Chernobrovyi (chernobrovyivs)
*/

String version_po = "0.5.2";
byte LEDcounter = 0;
boolean btn_flag = 0;
boolean btn_status = 0;
boolean btn_status_work_const = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // Red light
  pinMode(3, OUTPUT); // Yellow light
  pinMode(4, OUTPUT); // Green light

  pinMode(8, INPUT_PULLUP); // btn initial

  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 0);

  Serial.begin(9600);
}

void automode_fn(){
  Serial.println("Включен автоматический режим!\n");
      LEDcounter = 2;
      while(LEDcounter <= 4){
        switch(LEDcounter){
          case 2:
            digitalWrite(2, 1);
            digitalWrite(3, 0);
            digitalWrite(4, 0);

            Serial.println("Red light.\n");
            break;
          case 3:
            digitalWrite(2, 0);
            digitalWrite(3, 1);
            digitalWrite(4, 0);

            Serial.println("Yellow light.\n");
            break;
          case 4:
            digitalWrite(2, 0);
            digitalWrite(3, 0);
            digitalWrite(4, 1);

            Serial.println("Green light.\n");
            break;
          default:
            digitalWrite(2, 0);
            digitalWrite(3, 0);
            digitalWrite(4, 0);
            break;
        }

        LEDcounter++;
        delay(2000);
        digitalWrite(2, 0);
        digitalWrite(3, 0);
        digitalWrite(4, 0);
      }
}

void manualmode_fn(){
  Serial.println("Включён ручной режим!\n");
  delay(2000);
}

void loop(){
  Serial.println("Версия ПО: " + version_po);
  delay(1000);
  Serial.println("Выберите режим работы!");
  delay(2000);
  btn_status = !digitalRead(8); // Read btn status!
  //btn_status_work_const = 0;
  Serial.println(btn_status);

  if(btn_status == 1 && btn_flag == 0){
    btn_status_work_const = 1;
    btn_flag = 1;
    delay(2000);
  } else if(btn_status == 0 && btn_flag == 1){
    btn_status_work_const = 0;
    btn_flag = 0;
    delay(2000);
  }

  if((btn_status_work_const == 1) && (btn_flag == 1)){
    automode_fn();

    if(LEDcounter > 4){
      LEDcounter = 0;
      Serial.println("Переменная LEDcounter == 0!\n");
      delay(2000);
    }
  }
  else {
    manualmode_fn();
  }
}