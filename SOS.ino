void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //3 short blinks for S
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);//LED on for 500ms
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);//LED off for 1000ms
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);//LED on for 500ms
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);//LED off for 1000ms
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);//LED on for 500ms
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);//LED off for 1000ms
  //3 long blinks for O
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1500);//LED on for 1500ms
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);//LED off for 1000ms
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1500);//LED on for 1500ms
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);//LED off for 1000ms
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1500);//LED on for 1500ms
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);//LED off for 1000ms
 
}
