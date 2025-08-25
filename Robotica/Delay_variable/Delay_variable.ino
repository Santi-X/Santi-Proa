//
int ledPin = 7;
int bot = 100;
int dash = 300;
int finaldelay = 1500;
void setup() {
    // put your setup code here, to run once:
pinMode (ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite (ledPin,HIGH);
delay(bot);
digitalWrite(ledPin,LOW);
delay(bot);
digitalWrite (ledPin,HIGH);
delay(bot);
digitalWrite(ledPin,LOW);
delay(bot);
digitalWrite (ledPin,HIGH);
delay(bot);
digitalWrite(ledPin,LOW);
delay(bot);

digitalWrite (ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(dash);
digitalWrite (ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(dash);
digitalWrite (ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(dash);

digitalWrite (ledPin,HIGH);
delay(bot);
digitalWrite(ledPin,LOW);
delay(bot);
digitalWrite (ledPin,HIGH);
delay(bot);
digitalWrite(ledPin,LOW);
delay(bot);
digitalWrite (ledPin,HIGH);
delay(bot);
digitalWrite(ledPin,LOW);
delay(bot);

delay(finaldelay);
}
