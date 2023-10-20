#include <LiquidCrystal.h>
// C++ code
//
int led1 = 13;//led Pin13
float temp2;
int mtor = 10;
int sensorValue;
int seconds = 0;
LiquidCrystal lcd_1(12,11,5,4,3,2);
void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(mtor, OUTPUT);
  Serial.begin(9600);//Buadios
  lcd_1.begin(16,2);
  lcd_1.print("Temepratura");
  
  
}

void loop()
{
  	sensorValue = analogRead(A0); 
  	temp2 = (sensorValue * (500.0 / 1024.0)) - 50.0 ;
  
  	lcd_1.print(temp2);
  
	lcd_1.setCursor(0,1);
  
  if(temp2<=10){
  	digitalWrite(led1, HIGH);
    delay(500);
    digitalWrite(led1, LOW);
  	digitalWrite(mtor, HIGH);
  }
  
 if(temp2>=11 && temp2 <= 25){
  	digitalWrite(led1, LOW);
    delay(500);
  	digitalWrite(mtor, LOW);
  }
  
 if(temp2>=26){
  	digitalWrite(led1, HIGH);
    delay(500);
  	digitalWrite(mtor, HIGH);
  }
  	
  	
 
}