int voltage = 0;   //value of A0
  
void setup() {
   Serial.begin(9600);
}
  
void loop() {
  voltage = analogRead(A0);
  Serial.println(voltage);
  delay(10);
}
