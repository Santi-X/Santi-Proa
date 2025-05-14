
int blueLed = 9;
int brighness1 = 0;
int brighness2 = 125;
int brighness3 = 255;
int dt = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(blueLed, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(blueLed, brighness1);
delay(dt);
analogWrite(blueLed,brighness2);
delay(dt);
analogWrite(blueLed,brighness3);
delay(dt);
}
