#define AO_PIN A0    
void setup() {  
Serial.begin(9600);  
}  
void loop() {  
    delay(10);                        
    int rainValue = analogRead(AO_PIN);  
    Serial.println(rainValue);   
    delay(1000);       
}      
