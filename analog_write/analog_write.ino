int blue=3;
int red=5;
//int volt=120;
int Lwait=500;

void setup() {
  // put your setup code here, to run once:
pinMode(blue,OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
analogWrite(blue,0);
analogWrite(red,0);
delay(Lwait);
analogWrite(blue,50);
analogWrite(red,50);
delay(Lwait);
analogWrite(blue,100);
analogWrite(red,100);
delay(Lwait);
analogWrite(blue,150);
analogWrite(red,150);
delay(Lwait);
analogWrite(blue,200);
analogWrite(red,200);
delay(Lwait);
analogWrite(blue,255);
analogWrite(red,255 );
delay(Lwait);
}
