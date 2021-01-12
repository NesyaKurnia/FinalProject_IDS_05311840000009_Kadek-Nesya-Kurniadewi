String voice;

#define lockPin 11
#define unlockPin 12
void setup() 
{                                           
  Serial.begin(9600);
  pinMode(lockPin, OUTPUT);
  pinMode(unlockPin, OUTPUT);
 
}
void loop() {
 
  while (Serial.available())  
  {                            
  delay(10);                  
  char c = Serial.read();  
  voice += c;                 
  } 

  if (voice.length() > 0) {
    Serial.println(voice);
  if(voice == "door lock")//                             
     {
   
     digitalWrite(lockPin,HIGH);
     delay(3000);
     digitalWrite(lockPin,LOW);
    
     }  
  else if(voice == "door unlock")//                              
     {
    
    digitalWrite(unlockPin,HIGH);
     delay(3000);
     digitalWrite(unlockPin,LOW);
     }
 voice="";                                                     
  }}
