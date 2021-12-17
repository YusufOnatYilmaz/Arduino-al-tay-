int LedPin = 9;
int ButonPin = 4;
int i;

void setup() {
pinMode(LedPin, OUTPUT);
pinMode(ButonPin, INPUT);
Serial.begin(9600);
}

void loop(){
for (i=0; i<255;i++){
  analogWrite(LedPin, i);
  delay(15);
}
for (i=255; i>0; i--){
  analogWrite(LedPin, i);
  delay(15);
}
}
