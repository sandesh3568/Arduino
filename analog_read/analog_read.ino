//int readpin=A1;
//int V1;
//int wait=500;
//
//void setup() {
//  // put your setup code here, to run once:
//pinMode(readpin,INPUT);
//Serial.begin(9600);
//}
//
//void loop() {
//  // put your main code here, to run repeatedly:
//V1=analogRead(readpin);
//Serial.println(V1);
//delay(wait);
//}

// 2nd version

int readpin=A1;
int readVal;
float V1;
int wait=500;

void setup() {
  // put your setup code here, to run once:
pinMode(readpin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(readpin);
V1=(5./1023.)*readVal;
Serial.println(V1);
delay(wait);
}
