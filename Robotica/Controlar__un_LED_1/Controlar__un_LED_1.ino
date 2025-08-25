int ledPin = 10;
int potPin = A2;
int potVal;    // corregido: usás potVal, no potval
int dt = 200;
int light;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);  // corregido: era potVal, debe ser potPin
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.println(potVal);
  light = map(potVal, 0, 1023, 0, 255);
  analogWrite(ledPin, light);
  delay(dt);
}
