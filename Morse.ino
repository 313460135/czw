#include <Morse.h>
 
Morse morse(13);
char Morse_all[][4]{
  {'.', '-', '*', '*'}, //A
  {'-', '.', '.', '.'}, //B
  {'-', '.', '-', '.'}, //C
  {'-', '.', '.', '*'}, //D
  {'.', '*', '*', '*'}, //E
  {'.', '.', '-', '.'}, //F
  {'-', '-', '.', '*'}, //G
  {'.', '.', '.', '.'}, //H
  {'.', '.', '*', '*'}, //I
  {'.', '-', '-', '-'}, //J
  {'-', '.', '-', '*'}, //K
  {'.', '-', '.', '.'}, //L
  {'-', '-', '*', '*'}, //M
  {'-', '.', '*', '*'}, //N
  {'-', '-', '-', '*'}, //O
  {'.', '-', '-', '.'}, //P
  {'-', '-', '.', '-'}, //Q
  {'.', '-', '.', '*'}, //R
  {'.', '.', '.', '*'}, //S
  {'-', '*', '*', '*'}, //T
  {'.', '.', '-', '*'}, //U
  {'.', '.', '.', '-'}, //V
  {'.', '-', '-', '*'}, //W
  {'-', '.', '.', '-'}, //X
  {'-', '.', '-', '-'}, //Y
  {'-', '-', '.', '.'}  //Z
};

  void setup()
{Serial.begin(9600);
}
 
  void loop()
{  String  morse_o="";
   String  morse_a="";

int n=0,i,j,a;
  while(Serial.available()>0)
  { 
    morse_o+=Serial.read();
    delay(100);
    n++;
  }

  for(i=0;i<n;i++)
  {
    for(j=0;j<4;j++)
    { a=int(morse_o[i]-97);
      morse_a+=Morse_all[a][j];
    }
    morse_a+=' ';
  }

  Serial.println(morse_a);
  for(i=0;morse_a[i]!='/0';i++)
  {  switch(morse_a[i])
     {case '.':
          Morse.dot();
          break;
      case '-':
          Morse.dash();
          break;
      case' ':
          Morse.a_space();
          break;
      default:
          Morse.b_space();
     }
  }
  Serial.println("That is all!");
   
}
