void setup() {
  // put your setup code here, to run once:
  pinMode(A4, INPUT); // Определяем ПИН А4 как ВХОД
  pinMode(A1, INPUT); // Определяем ПИН А1 как ВХОД

  Serial.begin(9600); // Определяем COM порт и его скорость для вывода информации в терминал
}

void loop() {
  // put your main code here, to run repeatedly:
  // Определяем и соотносим кнопку_1 и кнопку_2 с цифровыми входами, и даём команду на чтение.
  boolean button1 = digitalRead(A1); 
  boolean button2 = digitalRead(A4);

  Serial.print("Button1: "); Serial.print(button1);
  Serial.print("Button2: "); Serial.println(button2);
}
