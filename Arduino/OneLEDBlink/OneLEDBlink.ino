//Program: Turn on LED
//LED connected to Pin 6
void setup() {
  // put your setup code here, to run once:
  //Initialize pin 6 as output
  pinMode(6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Turn on LED at Pin 6
  digitialWrite(6, HIGH);
  //Delay of 1 second
  delay(2000);
  //Turn off the LED at pin 6
  digitalWrite(6, LOW);
  //Delay of 1 second
  delay(4000);
}
