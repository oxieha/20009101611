void setup()
{
  
  Serial.begin(9600);
  Serial.println("I'm OK");
  for(int i=2;i<9;i++)
  {
    pinMode(i,OUTPUT);
  }
   digitalWrite(2,LOW);
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
}
byte i;
void loop()
{
 
  while(Serial.available()>0)
  {
    i=Serial.read();
    Serial.println(i);
    i=i-'0';
  	switch(i)
    {
      case 0:digitalWrite(2,HIGH);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,HIGH);
             digitalWrite(6,HIGH);digitalWrite(7,HIGH);
             digitalWrite(8,LOW);break;
      case 1:digitalWrite(2,LOW);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,LOW);
             digitalWrite(6,LOW);digitalWrite(7,LOW);
             digitalWrite(8,LOW);break;
      case 2:digitalWrite(2,HIGH);digitalWrite(3,HIGH);
             digitalWrite(4,LOW);digitalWrite(5,HIGH);
             digitalWrite(6,HIGH);digitalWrite(7,LOW);
             digitalWrite(8,HIGH);break;
      case 3:digitalWrite(2,HIGH);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,HIGH);
             digitalWrite(6,LOW);digitalWrite(7,LOW);
             digitalWrite(8,HIGH);break;
      case 4:digitalWrite(2,LOW);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,LOW);
             digitalWrite(6,LOW);digitalWrite(7,HIGH);
             digitalWrite(8,HIGH);break;
      case 5:digitalWrite(2,HIGH);digitalWrite(3,LOW);
             digitalWrite(4,HIGH);digitalWrite(5,HIGH);
             digitalWrite(6,LOW);digitalWrite(7,HIGH);
             digitalWrite(8,HIGH);break;
      case 6:digitalWrite(2,HIGH);digitalWrite(3,LOW);
             digitalWrite(4,HIGH);digitalWrite(5,HIGH);
             digitalWrite(6,HIGH);digitalWrite(7,HIGH);
             digitalWrite(8,HIGH);break;
      case 7:digitalWrite(2,HIGH);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,LOW);
             digitalWrite(6,LOW);digitalWrite(7,LOW);
             digitalWrite(8,LOW);break;
      case 8:digitalWrite(2,HIGH);digitalWrite(3,HIGH);
             digitalWrite(4,HIGH);digitalWrite(5,HIGH);
             digitalWrite(6,HIGH);digitalWrite(7,HIGH);
             digitalWrite(8,HIGH);break;
    }
  }
}
