int y;
int led_pin[3];
int disp_pin[7];
int zero_otschota;

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

      zero_otschota = 0;

      break;
    case 1:
      digitalWrite(disp_pin[0], LOW);    
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], LOW);    
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], LOW);
      digitalWrite(disp_pin[6], LOW);
      
      zero_otschota = 1;

      break;
    case 2:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], LOW);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], HIGH);
      digitalWrite(disp_pin[5], LOW);
      digitalWrite(disp_pin[6], HIGH);
      
      zero_otschota = 2;

      break;
    case 3:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], LOW);
      digitalWrite(disp_pin[6], HIGH);
      
      zero_otschota = 3;

      break;
    case 4:
      digitalWrite(disp_pin[0], LOW);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], LOW);
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], HIGH);
      digitalWrite(disp_pin[6], HIGH);
      
      zero_otschota = 4;

      break;
    case 5:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], LOW);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], HIGH);
      digitalWrite(disp_pin[6], HIGH);
      
      zero_otschota = 5;

      break;
    case 6:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], LOW);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], HIGH);
      digitalWrite(disp_pin[5], HIGH);
      digitalWrite(disp_pin[6], HIGH);
      
      zero_otschota = 6;

      break;
    case 7:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], LOW);
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], LOW);
      digitalWrite(disp_pin[6], LOW);
      
      zero_otschota = 7;

      break;
    case 8:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], HIGH);
      digitalWrite(disp_pin[5], HIGH);
      digitalWrite(disp_pin[6], HIGH);
      
      zero_otschota = 8;

      break;
    case 9:
      digitalWrite(disp_pin[0], HIGH);
      digitalWrite(disp_pin[1], HIGH);
      digitalWrite(disp_pin[2], HIGH);
      digitalWrite(disp_pin[3], HIGH);
      digitalWrite(disp_pin[4], LOW);
      digitalWrite(disp_pin[5], HIGH);
      digitalWrite(disp_pin[6], HIGH);
      
      zero_otschota = 9;

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

void led_functions(int led_num)
{
  if(led_num == 0)
  {
    Serial.println("LED");
    delay(1000);

    if(y == 0)
    {
      digitalWrite(11, HIGH);
      digitalWrite(12, LOW);
      digitalWrite(13, LOW);
    } else if(y == 1)
    {
      digitalWrite(11, LOW);
      digitalWrite(12, HIGH);
      digitalWrite(13, LOW);
    } else
    {
      digitalWrite(13, LOW);
      digitalWrite(12, LOW);
      digitalWrite(13, HIGH);
    }

    y++;
    if(y >= 3)
    {
      y = 0;
    }
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(11, OUTPUT);  
  pinMode(12, OUTPUT);  
  pinMode(13, OUTPUT);  

  pinMode(2, OUTPUT);    
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  define_segment_pins(2,3,4,5,6,7,8);
}

void loop() {
  // put your main code here, to run repeatedly:

  int i;

  led_functions(zero_otschota);

  for(i = 5; i >= 0; i--)
  {
    display_number(i);
    delay(1000);
  }
}
