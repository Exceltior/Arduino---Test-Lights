

int led = 13;
int readfromSerial= 0;

void setup(){
  Serial.begin(9600);
  Serial.println("Checking LEDS...");
  pinMode(led, OUTPUT); 
  digitalWrite(led,LOW);
  delay(200);
  int ledState = digitalRead(led); //
  Serial.println("Testing LEDS....");
  digitalWrite(led, HIGH);
  Serial.println(ledState); //
  delay(5000);
  digitalWrite(led,LOW);
  delay(2000); 
  Serial.println("Testing Done ...");
}

void loop(){
  //Check Serial if available
  if(Serial.available() > 0){
    readfromSerial = Serial.read();
    
    if( readfromSerial == 'l'){ digitalWrite(led,HIGH);Serial.println("LEDS ON!!!!!");}
    if( readfromSerial == 'o'){ digitalWrite(led,LOW);Serial.println("LEDS OFF!!!!!");}  
  }
}
