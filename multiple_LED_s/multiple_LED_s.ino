int redLED=8;
int blueLED=10;
int red=100;
int blue=100;
int Lwait=200;
void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,HIGH);
delay(red);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,HIGH);
delay(blue);
digitalWrite(blueLED,LOW);

digitalWrite(redLED,HIGH);
delay(red);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,HIGH);
delay(blue);
digitalWrite(blueLED,LOW);


digitalWrite(redLED,HIGH);
delay(red);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,HIGH);
delay(blue);
digitalWrite(blueLED,LOW);

digitalWrite(redLED,HIGH);
delay(red);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,HIGH);
delay(blue);
digitalWrite(blueLED,LOW);

digitalWrite(redLED,HIGH);
delay(red);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,HIGH);
delay(blue);
digitalWrite(blueLED,LOW);

digitalWrite(redLED,HIGH);
delay(red);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,HIGH);
delay(blue);
digitalWrite(blueLED,LOW);

digitalWrite(redLED,HIGH);
delay(red);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,HIGH);
delay(blue);
digitalWrite(blueLED,LOW);
//single blinking finish

digitalWrite(redLED,HIGH);
digitalWrite(blueLED,HIGH);
delay(Lwait);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,LOW);
delay(Lwait);

digitalWrite(redLED,HIGH);
digitalWrite(blueLED,HIGH);
delay(Lwait);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,LOW);
delay(Lwait);

digitalWrite(redLED,HIGH);
digitalWrite(blueLED,HIGH);
delay(Lwait);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,LOW);
delay(Lwait);

digitalWrite(redLED,HIGH);
digitalWrite(blueLED,HIGH);
delay(Lwait);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,LOW);
delay(Lwait);

digitalWrite(redLED,HIGH);
digitalWrite(blueLED,HIGH);
delay(Lwait);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,LOW);
delay(Lwait);

digitalWrite(redLED,HIGH);
digitalWrite(blueLED,HIGH);
delay(Lwait);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,LOW);
delay(Lwait);

digitalWrite(redLED,HIGH);
digitalWrite(blueLED,HIGH);
delay(Lwait);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,LOW);
delay(Lwait);



}
