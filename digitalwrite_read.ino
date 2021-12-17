const int buton = 3;
const int LED = 2;
int butonundurumu = 0;

void setup()
{
  pinMode(buton, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  butonundurumu = digitalRead(buton);
  Serial.println(butonundurumu);
  if (butonundurumu == HIGH)
  {
    digitalWrite(LED, HIGH);
  } 
  else{
    digitalWrite(LED, LOW);
  }
}
