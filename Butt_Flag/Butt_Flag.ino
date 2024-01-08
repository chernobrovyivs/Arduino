boolean bytt_flag = 0;
boolean led_flag = 0;
boolean butt;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  butt = !digitalRead(3); // Считать текущее состояние кнопки!

  if (butt == 1 && butt_flag ==0){
    butt_flag = 1;
    Serial.println("Button pressed");
    led_flag = !led_flag;
    digitalWrite(13, led_flag);
  }

  if (butt == 0 && butt_flag == 1){
    butt_flag = 0;
    Serial.println("Button released");
    led_flag = !led_flag;
    digitalWrite(13, led_flag);
  }

  /* Аналогичная запись, но в более элегантном виде!
  if (butt == 1 && butt_flag ==0){
    butt_flag = 1;
  } else if (butt == 0 && butt_flag == 1){
    butt_flag = 0;
  }
  */
}
