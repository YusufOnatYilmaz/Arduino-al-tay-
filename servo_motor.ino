#include <Servo.h>
 
Servo BenimMotorum;  
int i =0;
void setup() {
   pinMode(potpin,INPUT);
   Serial.begin(9600);
   BenimMotorum.attach(9);
}

void loop() {

for (i=0; i<255;i++){
  BenimMotorum.write(i);
  delay(15);
}

for (i=255; i>0; i--){
 BenimMotorum.write(i);
  delay(15);
}
}
