const int trigPin=4; 
const int echoPin=5;
long duration;
int distance;
void setup() {

  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(14,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  distance=duration*0.034/2;
  Serial.print("Distance:");
  Serial.println(distance);
  if(distance==3)
  {
    digitalWrite(2,HIGH);
  }
  else if(distance>209&&distance<1000)
  {
    digitalWrite(13,HIGH);
  }
  else if(distance>1000&&distance<2000)
  {
    digitalWrite(12,HIGH);
  }
  else if(distance==2438)
  {
    digitalWrite(14,HIGH);
  }
}
