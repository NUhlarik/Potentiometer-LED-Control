const int ledPin = 5;
const int potPin = A0;

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int potValue = analogRead(potPin);
  int ledValue = map(potValue, 1023, 0, 0, 255);
  analogWrite(ledPin, ledValue);
}
