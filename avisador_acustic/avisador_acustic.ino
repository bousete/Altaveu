const int altaveu=3;
const int ldr1=A0;
int vldr;

void setup()
{
  pinMode (altaveu,OUTPUT);
  pinMode (ldr1,INPUT);
}
void loop()
{
  vldr=analogRead(ldr1);
  vldr=map(vldr,0,1023,0,255);
  analogWrite(altaveu,vldr);
}
