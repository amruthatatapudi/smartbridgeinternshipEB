const int BUTTON =5;
const int LED =4;
int BUTTONstate=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LED,OUTPUT);
  pinMode(BUTTON,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
   BUTTONstate=digitalRead(BUTTON);
  if(BUTTONstate==HIGH)
  {
    Serial.println("HIGH");
    digitalWrite(LED,LOW);
 
  }
  else 
  {
    Serial.println("LOW");
    digitalWrite(LED,HIGH);
  
  }
  
  
}.
