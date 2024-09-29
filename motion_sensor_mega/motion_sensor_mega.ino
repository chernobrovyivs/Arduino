void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A6, OUTPUT);
  pinMode(A7, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  bool ms = analogRead(A7);
  Serial.println(ms);

  if(ms == 1){
    digitalWrite(A6, HIGH);
  } else{
    digitalWrite(A6, LOW);
  }
}
