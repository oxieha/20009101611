#include <MsTimer2.h>
int tick1 = 0;
int tick2 = 0;
void onTimer()
{
  tick1++;
  if((tick1 > 9 && tick2 == 9)||digitalRead(2)==0)
  {
    tick1 = 0 ;
    tick2 = 0 ;
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(8, tick2&0x1);
    digitalWrite(9, (tick2>>1)&0x1);
    digitalWrite(10, (tick2>>2)&0x1);
    digitalWrite(11, (tick2>>3)&0x1);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(8, tick1&0x1);
    digitalWrite(9, (tick1>>1)&0x1);
    digitalWrite(10, (tick1>>2)&0x1);
    digitalWrite(11, (tick1>>3)&0x1);
  }
  if(tick1 > 9)
  {
    tick1 = 0 ;
    tick2 ++;
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
    digitalWrite(8, tick2&0x1);
    digitalWrite(9, (tick2>>1)&0x1);
    digitalWrite(10, (tick2>>2)&0x1);
    digitalWrite(11, (tick2>>3)&0x1);
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(8, tick1&0x1);
    digitalWrite(9, (tick1>>1)&0x1);
    digitalWrite(10, (tick1>>2)&0x1);
    digitalWrite(11, (tick1>>3)&0x1);
  }
  else
  {
   	digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
    digitalWrite(8, tick1&0x1);
    digitalWrite(9, (tick1>>1)&0x1);
    digitalWrite(10, (tick1>>2)&0x1);
    digitalWrite(11, (tick1>>3)&0x1);
   }
}
void setup()
{
  pinMode(2,OUTPUT);
  digitalWrite(2, HIGH);
  int  i = 8;
  for(;i < 14; i++)
  {
    pinMode(i,OUTPUT);
  }
  MsTimer2::set(200,onTimer);  //为了快速查看循环，设置为200ms计时一次 
  MsTimer2::start();
}

void loop()
{
}
