 #include <EEPROM.h>

#include <VarSpeedServo.h>

int x = 0;
VarSpeedServo myServo2;

VarSpeedServo myServo3;

VarSpeedServo myServo4;

VarSpeedServo myServo5;

VarSpeedServo myServo6;

VarSpeedServo myServo7;

VarSpeedServo myServo8;

VarSpeedServo myServo9;


void setup() {
  myServo2.attach(2);
 myServo2.detach();

  myServo3.attach(3);
 myServo3.detach();

  myServo4.attach(4);
 myServo4.detach();

  myServo5.attach(5);
 myServo5.detach();

  myServo6.attach(6);
 myServo6.detach();

  myServo7.attach(7);
 myServo7.detach();

  myServo8.attach(8);
 myServo8.detach();

  myServo9.attach(9);
 myServo9.detach();

    x = EEPROM.read(0);
  x = !x;
  EEPROM.write(0,x);

}

void loop() {
    if (x == 0) {
       myServo2.attach(2);
        myServo2.slowmove(90,10);
          myServo3.attach(3);
           myServo3.slowmove(90,10);
           myServo4.attach(4);
           myServo4.slowmove(90,10);
           myServo5.attach(5);
            myServo5.slowmove(90,10);
          myServo6.attach(6);
           myServo6.slowmove(160,10);
           myServo7.attach(7);
            myServo7.slowmove(20,10);
           myServo8.attach(8);
            myServo8.slowmove(160,10);
          myServo9.attach(9);
           myServo9.slowmove(20,10);
        delay(3000);
         }
    if (x == 1) {
       myServo2.attach(2);
        myServo2.slowmove(90,10);
          myServo3.attach(3);
           myServo3.slowmove(90,10);
           myServo4.attach(4);
           myServo4.slowmove(90,10);
           myServo5.attach(5);
            myServo5.slowmove(90,10);
          myServo6.attach(6);
           myServo6.slowmove(160,10);
           myServo7.attach(7);
            myServo7.slowmove(20,10);
           myServo8.attach(8);
            myServo8.slowmove(160,10);
          myServo9.attach(9);
           myServo9.slowmove(20,10);
        delay(3000);
            for (int count = 0; count < 3; count++) {
               myServo9.attach(9);
              myServo9.slowmove(90,60);
              delay(200);
             myServo2.attach(2);
              myServo2.slowmove(90,60);
                delay(10);
             myServo4.attach(4);
               myServo4.slowmove(30,60);
                   delay(10);
             myServo5.attach(5);
             myServo5.slowmove(135,60);
                  delay(10);
             myServo7.attach(7);
             myServo7.slowmove(80,60);
                delay(10);
             myServo3.attach(3);
              myServo3.slowmove(90,60);
                delay(10);
             myServo9.attach(9);
              myServo9.slowmove(30,60);
             delay(200);
             myServo7.attach(7);
             myServo7.slowmove(30,60);
                delay(10);
              myServo6.attach(6);
             myServo6.slowmove(90,60);
              delay(200);
              myServo8.attach(8);
             myServo8.slowmove(90,60);
             delay(10);
              myServo3.attach(3);
             myServo3.slowmove(150,60);
             delay(10);
             myServo5.attach(5);
             myServo5.slowmove(90,60);
             delay(10);
              myServo4.attach(4);
             myServo4.slowmove(90,60);
             delay(10);
              myServo2.attach(2);
              myServo2.slowmove(40,60);
             delay(10);
             myServo6.attach(6);
             myServo6.slowmove(160,60);
             delay(200);
             myServo8.attach(8);
              myServo8.slowmove(160,60);
               delay(10);
              }

            for (int count = 0; count < 3; count++) {
               myServo7.attach(7);
              myServo7.slowmove(90,60);
              delay(200);
             myServo4.attach(4);
              myServo4.slowmove(90,60);
                delay(10);
             myServo2.attach(2);
               myServo2.slowmove(30,60);
                   delay(10);
              myServo3.attach(3);
             myServo3.slowmove(135,60);
                  delay(10);
              myServo9.attach(9);
             myServo9.slowmove(80,60);
                delay(10);
              myServo5.attach(5);
              myServo5.slowmove(90,60);
                delay(10);
              myServo7.attach(7);
              myServo7.slowmove(30,60);
             delay(200);
              myServo9.attach(9);
             myServo9.slowmove(30,60);
                delay(10);
               myServo8.attach(8);
             myServo8.slowmove(90,60);
              delay(200);
               myServo6.attach(6);
             myServo6.slowmove(90,60);
             delay(10);
               myServo5.attach(5);
             myServo5.slowmove(150,60);
             delay(10);
              myServo3.attach(3);
             myServo3.slowmove(90,60);
             delay(10);
               myServo2.attach(2);
             myServo2.slowmove(90,60);
             delay(10);
               myServo4.attach(4);
              myServo4.slowmove(40,60);
             delay(10);
              myServo8.attach(8);
             myServo8.slowmove(160,60);
             delay(200);
              myServo6.attach(6);
              myServo6.slowmove(160,60);
               delay(10);
              }

            for (int count = 0; count < 3; count++) {
            myServo2.attach(2);
                     myServo2.slowmove(90,100);
                             myServo3.attach(3);
                              myServo3.slowmove(90,100);
                            myServo4.attach(4);
                             myServo4.slowmove(90,100);
                            myServo5.attach(5);
                             myServo5.slowmove(90,100);
                            myServo6.attach(6);
                              myServo6.slowmove(160,100);
                             myServo7.attach(7);
                             myServo7.slowmove(30,100);
                            myServo8.attach(8);
                             myServo8.slowmove(160,100);
                            myServo9.attach(9);
                             myServo9.slowmove(30,100);
                            delay(300);
                            myServo7.attach(7);
                             myServo7.slowmove(50,100);
                            myServo9.attach(9);
                             myServo9.slowmove(50,100);
                            delay(200);
                            myServo3.attach(3);
                             myServo3.slowmove(150,100);
                            myServo5.attach(5);
                             myServo5.slowmove(150,100);
                           delay(200);
                            myServo7.attach(7);
                              myServo7.slowmove(30,100);
                             myServo9.attach(9);
                              myServo9.slowmove(30,100);
                             delay(200);
                             myServo6.attach(6);
                              myServo6.slowmove(140,100);
                            myServo8.attach(8);
                             myServo8.slowmove(140,100);
                            delay(200);
                            myServo2.attach(2);
                             myServo2.slowmove(140,100);
                            myServo4.attach(4);
                             myServo4.slowmove(140,100);
                            delay(200);
                            myServo6.attach(6);
                            myServo6.slowmove(160,100);
                            myServo8.attach(8);
                             myServo8.slowmove(160,100);
                             delay(300);
                }

            for (int count = 0; count < 3; count++) {
            myServo2.attach(2);
                   myServo2.slowmove(90,100);
                 myServo3.attach(3);
                 myServo3.slowmove(90,100);
                  myServo4.attach(4);
                  myServo4.slowmove(90,100);
                 myServo5.attach(5);
                  myServo5.slowmove(90,100);
                 myServo6.attach(6);
                  myServo6.slowmove(160,100);
                 myServo7.attach(7);
                  myServo7.slowmove(30,100);
                 myServo8.attach(8);
                  myServo8.slowmove(160,100);
                  myServo9.attach(9);
                  myServo9.slowmove(30,100);
                 delay(300);
                  myServo8.attach(8);
                  myServo8.slowmove(130,100);
                 myServo6.attach(6);
                  myServo6.slowmove(130,100);
                 delay(200);
                  myServo2.attach(2);
                   myServo2.slowmove(30,100);
                 myServo4.attach(4);
                  myServo4.slowmove(30,100);
                 delay(200);
                 myServo8.attach(8);
                  myServo8.slowmove(150,100);
                 myServo6.attach(6);
                  myServo6.slowmove(150,100);
                  delay(200);
                  myServo7.attach(7);
                  myServo7.slowmove(50,100);
                  myServo9.attach(9);
                  myServo9.slowmove(50,100);
                 delay(200);
                 myServo5.attach(5);
                   myServo5.slowmove(40,100);
                 myServo3.attach(3);
                  myServo3.slowmove(40,100);
                  delay(200);
                 myServo7.attach(7);
                  myServo7.slowmove(30,100);
                  myServo9.attach(9);
                   myServo9.slowmove(30,100);
                             delay(300);
                }
         }
} 