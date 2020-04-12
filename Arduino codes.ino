// Arduino Code to measure the speed of Sound Using Ultrasonic Sensor

int trigPin = 13;
int echoPin = 9;
float Time_of_ping;
float speedOfsound;
float targetDistance = 6;

void setup ()
{
  Serial.begin (9600);
  pinMode (trigPin, OUTPUT);
  pinMode (echoPin, INPUT);
  
  
}
void loop ()
{
  digitalWrite (trigPin,LOW);
  delayMicroseconds(2000);
  digitalWrite (trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite (trigPin,LOW);

  Time_of_ping = pulseIn (echoPin, HIGH);
  speedOfsound = 2* targetDistance/pingTime;
  speedOfsound = speedOfsound/63360*1000000*3600;
  Serial.print ("The speed of sound is: ");
  Serial.print (speedOfsound);
  Serial.println (" miles per hour");
  delay (300);
  
}

// Arduino Code to check the low level and high level value of your servo

#include <Servo.h>
int ServoPin = 3;
int pos;
Servo myproject;

void setup () {
  Serial.begin (9600);
  myproject.attach (ServoPin);
}
void loop ()
{
  Serial.println("Where would you like to position the servo? Please inputed digit must be in between 0-180 ");
  while (Serial.available() == 0) {}
  pos = Serial.parseInt ();

  mypointer.write(pos);

  if (pos >180){
    Serial.println ("Obey simple instruction please ");
    Serial.println ("");
    } 

  
}



