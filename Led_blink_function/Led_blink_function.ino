int led = 10;
int count = 0;
int wait = 500;
void setup() {
  pinMode(led, OUTPUT);
}
void loop() {
  blink(5, wait);
  delay(wait * 6);
}
void blink(int times, int d) {
  for (int i = 0; i < times; i++) {
    digitalWrite(led, HIGH);
    delay(wait);
    digitalWrite(led, LOW);
    delay(wait);
  }
}