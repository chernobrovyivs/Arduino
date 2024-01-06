unsigned long last_time;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Hello!");
  // delay(1000); // Приостановить работу на 1 сек
  // Serial.println("1 sec");
  // delay(2000);
  // Serial.println("2 sec");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(millis() - last_time > 5000){
    last_time = millis();
    Serial.println("5 sec!");
  }
}
