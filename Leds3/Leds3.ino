int t = 300;
void setup() {
  pinMode(13,INPUT);
  pinMode(12,INPUT);
  pinMode(11,INPUT);
  pinMode(10,INPUT);
}

void loop() {
for(int i==10; i<=13; i++){
  digitalWrite(i,1);
  t = t-50;
  delay(t);
}
}
