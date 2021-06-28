//This is the code for adruino uno board for IoT method.
#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
const int buzzer = 9;
const int pingPin = 7; 
const int echoPin = 6; 
const int pingPin1 = 8 ; 
const int echoPin1 = 10;
int count = 0;
long cm = 0;
long cm1 = 0;
void setup() 
{
Serial.begin(9600);
lcd.begin(16, 2);
lcd.print("Count of room:");
pinMode(buzzer, OUTPUT);
}
void loop()
{
lcd.setCursor(0, 1);
cm = functioning(pingPin,echoPin);
cm1 = functioning(pingPin1,echoPin1);
if(cm<333)
{
count-=1;
}
if(cm1<328)
{
count+=1;
}
lcd.print(count);
if(count==20)
{
tone(buzzer, 1000);
delay(10000);
noTone(buzzer);
delay(10000);
exit(0);
}
}
long microsecondsToCentimeters(long microseconds) 
{
return microseconds / 29 / 2;
}
long functioning(const int pingPin, const int echoPin)
{
long duration, cm;
pinMode(pingPin, OUTPUT);
digitalWrite(pingPin, LOW);
delayMicroseconds(2);
digitalWrite(pingPin, HIGH);
delayMicroseconds(10);
digitalWrite(pingPin, LOW);
pinMode(echoPin, INPUT);
duration = pulseIn(echoPin, HIGH);
cm = microsecondsToCentimeters(duration);
Serial.print(cm);
Serial.print("cm");
Serial.println();
delay(100);
return cm;
}
