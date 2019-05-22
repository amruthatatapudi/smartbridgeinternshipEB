

int POTstate=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(2,OUTPUT);
  pinMode(5,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   POTstate=analogRead(5);
   Serial.println(POTstate);
  
  
  
}
