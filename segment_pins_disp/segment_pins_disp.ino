int disp_pin[7];

void define_segment_pins(int a, int b, int c, int d, int e, int f, int g){
  disp_pin[0] = a;
  disp_pin[1] = b;
  disp_pin[2] = c;
  disp_pin[3] = d;
  disp_pin[4] = e;
  disp_pin[5] = f;
  disp_pin[6] = g;
}

void display_number(int num)    
{
  switch(num)
  {
    case 0:
      digitalWrite(disp_pin[0], HIGH);    
      digitalWrite(disp_pin[1], HIGH);    
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], HIGH);
      digitalWrite(disp_pin[5], HIGH);
      digitalWrite(disp_pin[6], LOW); 
      break;
    case 1:
      digitalWrite(disp_pin[0], LOW);    
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], LOW);    
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], LOW);
      digitalWrite(disp_pin[6], LOW);
      break;
    case 2:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], LOW);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], HIGH);
      digitalWrite(disp_pin[5], LOW);
      digitalWrite(disp_pin[6], HIGH);
      break;
    case 3:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], LOW);
      digitalWrite(disp_pin[6], HIGH);
      break;
    case 4:
      digitalWrite(disp_pin[0], LOW);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], LOW);
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], HIGH);
      digitalWrite(disp_pin[6], HIGH);
      break;
    case 5:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], LOW);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], HIGH);
      digitalWrite(disp_pin[6], HIGH);
      break;
    case 6:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], LOW);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], HIGH);
      digitalWrite(disp_pin[5], HIGH);
      digitalWrite(disp_pin[6], HIGH);
      break;
    case 7:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], LOW);
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], LOW);
      digitalWrite(disp_pin[6], LOW);
      break;
    case 8:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], HIGH);
      digitalWrite(disp_pin[5], HIGH);
      digitalWrite(disp_pin[6], HIGH);
      break;
    case 9:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], HIGH);
      digitalWrite(disp_pin[6], HIGH);
      break;
    default:
      int l;

      for(l = 0; l>=7; l++)
      {
        digitalWrite(disp_pin[l], HIGH);
        delay(1000);
      }
      break;
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(A0, OUTPUT);    
  pinMode(A1, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(A2, OUTPUT);
  pinMode(A3, OUTPUT);
  define_segment_pins(A0,A1,6,7,8,A2,A3);
}

void loop() {
  // put your main code here, to run repeatedly:
  int i;
  for(i = 9; i>=0; i--)
  {
    display_number(i);
    delay(1000);
  }
  for(i = 0; i<=9; i++)
  {
    display_number(i);
    delay(1000);
  }
}
