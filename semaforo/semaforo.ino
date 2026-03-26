const int pinRosso = 13;
const int pinGiallo = 11;
const int pinVerde = 10;

void setup() {
  pinMode(pinRosso, OUTPUT);
  pinMode(pinGiallo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
}

void loop() {

  // led rosso
  digitalWrite(pinRosso, HIGH);
  digitalWrite(pinGiallo, LOW);
  digitalWrite(pinVerde, LOW);
  delay(3000);

  // led giallo
  digitalWrite(pinRosso, LOW);
  digitalWrite(pinGiallo, HIGH);
  digitalWrite(pinVerde, LOW);
  delay(1000);

  // led verde
  digitalWrite(pinRosso, LOW);
  digitalWrite(pinGiallo, LOW);
  digitalWrite(pinVerde, HIGH);
  delay(3000);
}
