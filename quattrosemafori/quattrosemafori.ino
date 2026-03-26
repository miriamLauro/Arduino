int ledRossi[]   = {1, 4, 7, 10};
int ledGialli[]  = {2, 5, 8, 11};
int ledVerdi[]   = {3, 6, 9, 12};

void setup() {
  for (int idx = 0; idx < 4; idx++) {
    pinMode(ledRossi[idx], OUTPUT);
    pinMode(ledGialli[idx], OUTPUT);
    pinMode(ledVerdi[idx], OUTPUT);
  }
}


void setSemaforo(int i, int r, int g, int v) {
  digitalWrite(ledRossi[i], r);
  digitalWrite(ledGialli[i], g);
  digitalWrite(ledVerdi[i], v);
}

void loop() {


  for (int i = 0; i < 4; i++) {
    bool gruppoA = (i % 2 == 0);

    if (gruppoA) {
      setSemaforo(i, HIGH, LOW, LOW);
    } else {
      setSemaforo(i, LOW, LOW, HIGH);
    }
  }
  delay(3000);

  
  for (int i = 0; i < 4; i++) {
    bool gruppoA = (i % 2 == 0);

    if (gruppoA) {
      setSemaforo(i, HIGH, LOW, LOW);
    } else {
      setSemaforo(i, LOW, HIGH, LOW);
    }
  }
  delay(1000);


  for (int i = 0; i < 4; i++) {
    bool gruppoA = (i % 2 == 0);

    if (gruppoA) {
      setSemaforo(i, LOW, LOW, HIGH);
    } else {
      setSemaforo(i, HIGH, LOW, LOW);
    }
  }
  delay(3000);


  for (int i = 0; i < 4; i++) {
    bool gruppoA = (i % 2 == 0);

    if (gruppoA) {
      setSemaforo(i, LOW, HIGH, LOW);
    } else {
      setSemaforo(i, HIGH, LOW, LOW);
    }
  }
  delay(1000);
}
