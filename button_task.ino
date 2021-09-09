void setup() {
  // put your setup code here, to run once:
pinMode(3, INPUT_PULLUP);
Serial.begin(9600);

}
int buttonStatus = 0;
void loop() {
  // put your main code here, to run repeatedly:
int pinValue = digitalRead(3);
delay(10);
if ( buttonStatus != pinValue) {
  buttonStatus = pinValue;
  Serial.println("bbb");
  Serial.println (buttonStatus);
}
}
