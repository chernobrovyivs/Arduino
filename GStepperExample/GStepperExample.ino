#include <GyverStepper.h>

GStepper<STEPPER4WIRE> stepper(4096, 2, 3, 4, 5);

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  // просто крутим туды-сюды
  if (!stepper.tick()) {
    static bool dir;
    dir = !dir;
    stepper.setTarget(dir ? -1024 : 1024);
  }
}
