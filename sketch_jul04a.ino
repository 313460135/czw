
void setup() {
  pinMode(6,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);

  
  Serial.begin(9600);
}

int income;

void loop() 
{
 
 if(Serial.available()>0)
income=Serial.read();
 switch(income)
 {case'0':
  show0();
  break;
  case'1':
  show1();
  break;
  case'2':
  show2();
  break;
  case'3':
  show3();
  break;
  case'4':
  show4();
  break;
  case'5':
  show5();
  break;
  case'6':
  show6();
  break;
  case'7':
  show7();
  break;
  case'8':
  show8();
  break;
  case'9':
  show9();
  break;
  default:
  break;
  
 }}

void show0()
{digitalWrite(6,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
}

void show1()
{digitalWrite(6,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
}

void show2()
{digitalWrite(6,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
}

void show3()
{digitalWrite(6,HIGH);
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
}

void show4()
{digitalWrite(6,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
}

void show5()
{digitalWrite(6,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
}

void show6()
{digitalWrite(6,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
}

void show7()
{digitalWrite(6,HIGH);
 digitalWrite(2,HIGH);
 digitalWrite(3,HIGH);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 
}

void show8()
{digitalWrite(6,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,LOW);
}

void show9()
{digitalWrite(6,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 digitalWrite(5,LOW);
}
