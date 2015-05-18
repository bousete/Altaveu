const int pin = 2;

int note = 1047;
int velocitat = 10;


void setup()
{
}


void loop()
{
  //A   ** Exemple ABEL **
  punt();
  ratlla();
  //Espai entre lletres
  espaiL();
  //B
  ratlla();
  punt();
  punt();
  punt();
  //Espai entre lletres
  espaiL();
  //E
  punt();
  //Espai entre lletres
  espaiL();
  //L
  punt();
  ratlla();
  punt();
  punt();
  //Espai entre paraules
  espaiP();
}


void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}
