//declaration
int led = 42;
//setup
void setup() {
  pinMode(led, OUTPUT);
}
//loop
void loop() {
  digitalWrite(led, HIGH);
  Serial.println("Led On");
  delay(2000);
  digitalWrite(led, LOW);
  Serial.println("Led Off");
  delay(2000);
}
