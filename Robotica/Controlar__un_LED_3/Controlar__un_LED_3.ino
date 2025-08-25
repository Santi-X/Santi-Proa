int ledPin = 10;
int potPin = A2;
int potVal;
int light;
int dt = 200;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(potPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  potVal = analogRead(potPin);
  Serial.println(potVal);
  
  light = map(potVal, 0, 1023, 0, 255);
  Serial.println(light);

  analogWrite(ledPin, light);
  delay(dt);
}
