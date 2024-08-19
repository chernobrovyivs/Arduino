#define potent_pin A2
int val;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(potent_pin);
  val = map(val, 0, 1023, 0, 5);
  val = constrain(val, 0, 10);

  Serial.println(val);
}
