const int trigPin D5;
const int echoPin = D6;
long duration;
int distance;
void setup() {
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT); 
    Serial.begin(9600); 
}
void loop() {
    delayMicroseconds (2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance= duration*0.034/2; |
    Serial.print("Distance: ");
    Serial.println(distance);
    delay(2000);
}