const int pinRosso = 13;
const int pinGiallo = 11;
const int pinVerde = 10;
const int pinPulsante = 12;

void luceRossa() {
  digitalWrite(pinRosso, HIGH);
  digitalWrite(pinGiallo, LOW);
  digitalWrite(pinVerde, LOW);
}

void luceGialla() {
  digitalWrite(pinRosso, LOW);
  digitalWrite(pinGiallo, HIGH);
  digitalWrite(pinVerde, LOW);
}

void luceVerde() {
  digitalWrite(pinRosso, LOW);
  digitalWrite(pinGiallo, LOW);
  digitalWrite(pinVerde, HIGH);
}

void setup() {
  pinMode(pinRosso, OUTPUT);
  pinMode(pinGiallo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinPulsante, INPUT);
}

void loop() {
  if (digitalRead(pinPulsante)) {
    luceRossa();
  } else {
    luceRossa();
    delay(3000);
    luceGialla();
    delay(1000);
    luceVerde();
    delay(3000);
  }
}
