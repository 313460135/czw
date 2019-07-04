void setup()
{
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}
int income=0,n;
void loop()
{if(Serial.available()>0)
{income=Serial.read();
 switch(income)
 {case'f':
  forward();
  break;
  case'b':
  backward();
  break;
  case'l':
  n=income;
  left();
  break;
  case'r':
  right();
  n=income;
  break;
  default:
  break;
 }}}
  
  
  void forward()
  { 
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
   
  }
  
    void backward()
  {
   digitalWrite(6,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(9,LOW);
   
  }
  
    void left()
  {
   digitalWrite(5,HIGH);
   digitalWrite(6,LOW);
   digitalWrite(10,HIGH);
   digitalWrite(9,LOW);
      while(1)
      {   
   digitalWrite(13,HIGH);
   delay(500);
   digitalWrite(13,LOW);
   delay(500);
        if(Serial.available()>0)
          break;
        
      }
      
   
  }
  
    void right()
  {
   digitalWrite(6,HIGH);
   digitalWrite(5,LOW);
   digitalWrite(9,HIGH);
   digitalWrite(10,LOW);
         while(1)
      {   
   digitalWrite(7,HIGH);
   delay(500);
   digitalWrite(7,LOW);
   delay(500);
           if(Serial.available()>0)
             break;
             
      }
  }
