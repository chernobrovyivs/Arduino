void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Открываем COM порт, и указываем скорость
  // Serial.println("Hello, Arduino!");
  // Serial.print("Hello, Arduino!");
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0) {
    int in_data = Serial.read() - '0';
    Serial.println(in_data);
  }
}
