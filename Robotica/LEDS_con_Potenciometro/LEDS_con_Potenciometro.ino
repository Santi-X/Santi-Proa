int ledPin=10;
int potVal=A0;
int dt=200;
int light;


void setup() {
pinMode(ledPin,OUTPUT);
pinMode(potVal,INPUT);
Serial.begin(9600);
}


void loop() {
potVal = analogRead(potPin);
Serial.println(potVal);
light = map(potVal, 0, 1023, 0, 255);
analogWrite(ledPin, light);
delay(dt);
}
