//Program to blink two LEDs
//Red LED connected to Pin 11
//Green LED connected to Pin 8
int rled = 11;
int gled = 8;
void setup() {
  // put your setup code here, to run once:
  //Initialize pin 8 and 11 as output
  pinMode(gled, OUTPUT);
  pinMode(rled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Turn ON LED at Pin 11
  //Turn OFF LED at Pin 8
  digitalWrite(rled, HIGH);
  digitalWrite(gled, LOW);
  //delay of 1 second
  delay(1000);
  //Turn OFF LED at Pin 11
  //Turn ON LED at Pin 8
  digitalWrite(rled, LOW);
  digitalWrite(gled, HIGH);
  //delay of 1 second
  delay(1000);
}
