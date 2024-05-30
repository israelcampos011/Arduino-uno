int v;
int vm;

void setup() {
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
v = analogRead(A0);
vm  = map(v, 0, 1023, 0, 10)

analogWrite(13, vm);

Serial.print(v);
}
