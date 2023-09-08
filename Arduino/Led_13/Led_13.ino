int led=13;
void setup() {
  // put your setup code here, to run once:
pinMode(led,OUTPUT); //Nr.port 3 Mode
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led,HIGH);
delay(200); //200=1s
digitalWrite(13,LOW);
delay(200);
}
