float V2; 
int readVal; 
int analogPin = A2; 
int ledPin = 10; 
int dt = 200; 

void setup() { 
  Serial.begin(9600); 
  pinMode(analogPin, INPUT); 
  pinMode(ledPin, OUTPUT); 
} 

void loop() { 
  readVal = analogRead(analogPin); 
  V2 = (5.0 * readVal) / 1023.0; 
  
  // Encender LED si el voltaje está cerca de 5.0V
  if (V2 >= 4.95 && V2 <= 5.05) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  Serial.println(V2); 
  delay(dt); 
}
