//Andres Acosta
//Edilson Montilla
int led=13;
int led2=6;
int led3=2;
void setup() {
// put your setup code here, to run once:
pinMode(led,OUTPUT); //Nr.port 3 Mode
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
//led rojo
digitalWrite(led,HIGH);
delay(1000); //200=1s
digitalWrite(13,LOW);
delay(1000);
//led amarillo
digitalWrite(led2,HIGH);
delay(1000); //200=1s
digitalWrite(6,LOW);
delay(800);
//led verde
digitalWrite(led3,HIGH);
delay(1000); //200=1s
digitalWrite(2,LOW);
delay(1000);


}
