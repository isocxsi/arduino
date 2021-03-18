void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  while(analogRead(A0)>600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int alco;
  alco=analogRead(A0);
  Serial.println(alco);
  delay(1000);
}
