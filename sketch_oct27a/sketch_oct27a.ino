#include <Servo.h>
Servo servo[4][3];
//define servos' ports
const int servo_pin[4][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 10},{11, 12, 13} };
void setup()
{
  //initialize all servos
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      servo[i][j].attach(servo_pin[i][j]);
      delay(20);
    }
  }
}
void loop(void)
{
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      servo[i][j].write(90);
      delay(20);
    }
  }
}
