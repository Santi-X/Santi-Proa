int potPin = A2;
int potVal;      // corregido: usás potVal, no potval
int ledPin = 10; // faltaba definir ledPin
int dt = 200;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);  // corregido: era potVal, debe ser potPin
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.println(potVal);  // corregido: usás potVal
  delay(dt);
}
