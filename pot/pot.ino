int v;
int vm;

void setup() {
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop() {
v = analogRead(A0);
vm  = map(v, 0, 1023, 0, 5)

Serial.print(v);
Serial.print("    ");
Serial.println(vm);
}
