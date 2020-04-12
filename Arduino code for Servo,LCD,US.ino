// A Arduino Code to measure the speed of Sound

int trigPin = 13;
int echoPin = 12;
float pingTime;
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

  pingTime = pulseIn (echoPin, HIGH);
  speedOfsound = 2* targetDistance/pingTime;
  speedOfsound = speedOfsound/63360*1000000*3600;
  Serial.print ("The speed of sound is: ");
  Serial.print (speedOfsound);
  Serial.println (" miles per hour");
  delay (300);
  
}



