//Integrantes del grupo:
//Santiago Polanco
//Fabian Carvajal

int LED = 13;
int buttonPin = 11;
bool val;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(buttonPin);
  if (val) {  
    digitalWrite(LED, HIGH);
  } else {
    digitalWrite(LED, LOW);
  }
}

