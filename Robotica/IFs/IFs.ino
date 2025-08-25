float V2; 
int readVal; 
int analogPin = A2; 
int ledPin = 13; // Puedes cambiar al pin que uses realmente
int dt = 500;    // Tiempo de espera en milisegundos

void setup() { 
  Serial.begin(9600); 
  pinMode(analogPin, INPUT); 
  pinMode(ledPin, OUTPUT); 
} 

void loop() { 
  readVal = analogRead(analogPin); 
  V2 = (5.0 * readVal) / 1023.0; 
  if (V2 > 4.0) { 
    digitalWrite(ledPin, HIGH); 
  } else {
    digitalWrite(ledPin, LOW); 
  }
  Serial.println(V2); 
  delay(dt); 
}
