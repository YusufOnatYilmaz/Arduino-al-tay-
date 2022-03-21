#include <Servo.h>
 
Servo BenimMotorum;  
int i =0;
void setup() {
   Serial.begin(9600);
   BenimMotorum.attach(11);
}

void loop() {

for (i=0; i<180;i++){
  BenimMotorum.write(i);
  delay(15);
  Serial.println(i);
}

for (i=180; i>0;i--){
  BenimMotorum.write(i);
  delay(15);
  Serial.println(i);
}

for (i=255; i>0; i--){
 BenimMotorum.write(i);
  delay(15);
}
}
