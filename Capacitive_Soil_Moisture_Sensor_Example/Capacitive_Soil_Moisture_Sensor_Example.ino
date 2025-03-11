int capacitive_soil_moisture_sensor_pin = A0;
int capacitive_soil_moisture_sensor_signal;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  init_capacitive_soil_moisture_sensor(capacitive_soil_moisture_sensor_pin);
}

void loop() {
  // put your main code here, to run repeatedly:
  capacitive_soil_moisture_sensor_signal = analogRead(capacitive_soil_moisture_sensor_pin);
  Serial.println(capacitive_soil_moisture_sensor_signal);
}

void init_capacitive_soil_moisture_sensor(int capacitive_soil_moisture_sensor_pin){
  pinMode(capacitive_soil_moisture_sensor_pin, INPUT);
}