#include <Servo.h>
 
Servo Benimservom;
int PotPin = A0;
int potdeger;

void setup() {
  Benimservom.attach(9);
}
 
void loop() {
  potdeger = analogRead(PotPin); // 0 - 1023 -> 0 180
  potdeger = map(potdeger, 0, 1023, 0, 180); 
  Benimservom.write(potdeger);
  delay(15);
}
