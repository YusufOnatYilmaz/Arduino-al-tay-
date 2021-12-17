int potPin=A0;
int potDeger;
 
void setup() {
Serial.begin(9600);
}
 
void loop() {
potDeger=analogRead(potPin);
Serial.println(potDeger);
}
