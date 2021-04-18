int redLED=8;
int dah=250;
int dit=50;
int Lwait=500;

void setup()
{
  pinMode(redLED, OUTPUT);
}

void loop()
{
  digitalWrite(redLED, HIGH);
  delay(dit); 
  digitalWrite(redLED, LOW);
  delay(dit); 
  
  digitalWrite(redLED, HIGH);
  delay(dit); 
  digitalWrite(redLED, LOW);
  delay(dit); 
  
  digitalWrite(redLED, HIGH);
  delay(dit); 
  digitalWrite(redLED, LOW);
  delay(dit); 

  digitalWrite(redLED, HIGH);
  delay(dah); 
  digitalWrite(redLED, LOW);
  delay(dah); 
  
  digitalWrite(redLED, HIGH);
  delay(dah); 
  digitalWrite(redLED, LOW);
  delay(dah); 
  
  digitalWrite(redLED, HIGH);
  delay(dah); 
  digitalWrite(redLED, LOW);
  delay(dah); 
  
  digitalWrite(redLED, HIGH);
  delay(dit); 
  digitalWrite(redLED, LOW);
  delay(dit); 
  
  digitalWrite(redLED, HIGH);
  delay(dit); 
  digitalWrite(redLED, LOW);
  delay(dit); 
  
  digitalWrite(redLED, HIGH);
  delay(dit); 
  digitalWrite(redLED, LOW);
  delay(dit); 
  
  delay(Lwait);
}
