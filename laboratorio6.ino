int pinLed1 = 2;
int pinLed2 = 3;
int pinLed3 = 4;
int LDRpin = A0;
int valorLDR = 0;

void setup() {
  Serial.begin(9600);
  pinMode(pinLed1, OUTPUT);
  pinMode(pinLed2, OUTPUT);
  pinMode(pinLed3, OUTPUT);

}

void loop() {
  digitalWrite(pinLed1, LOW);
  digitalWrite(pinLed2, LOW);
  digitalWrite(pinLed3, LOW);

  valorLDR= analogRead(LDRpin);
  Serial.println(valorLDR);

  if(valorLDR > 250)
  {
    digitalWrite(pinLed1, HIGH);
  }
  if(valorLDR > 512)
  {
    digitalWrite(pinLed2, HIGH);
  }
  if(valorLDR > 768)
  {
    digitalWrite(pinLed3, HIGH);
  }
  delay(200);
}
