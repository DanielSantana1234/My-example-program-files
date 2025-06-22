//For common anode connection:
//HIGH will turn OFF the LED
//LOW will turn ON the LED
//Program to control RGB LED
//Pin used red 3, green 5, blue 6
int rled = 3;
int gled = 5;
int bled = 6;
void setup() {
  // put your setup code here, to run once:
  //initialize pins 3,5,6 as OUTPUT pins
  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
  pinMode(bled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //turn ON only red LED
  digitalWrite(rled, LOW);
  digitalWrite(gled, HIGH);
  digitalWrite(bled, HIGH);
  delay(1000);

  //turn ON only green LED
  digitalWrite(rled, HIGH);
  digitalWrite(gled, LOW);
  digitalWrite(bled, HIGH);
  delay(1000);

  //turn ON only blue LED
  digitalWrite(rled, HIGH);
  digitalWrite(gled, HIGH);
  digitalWrite(bled, LOW);
  delay(1000);

  //turn OFF all colours
  digitalWrite(rled, HIGH);
  digitalWrite(gled, HIGH);
  digitalWrite(bled, HIGH);
  delay(1000);

  //ON red and green with 50% brightness
  analogWrite(rled, 127);
  analogWrite(gled, 127);
  digitalWrite(bled, HIGH);
  delay(1000);

  //ON green and blue with 50% brightness
  analogWrite(gled, 127);
  analogWrite(bled, 127);
  digitalWrite(rled, HIGH);
  delay(1000);

  //ON red and blue with 50% brightness
  analogWrite(rled, 127);
  analogWrite(bled, 127);
  digitalWrite(gled, HIGH);
  delay(1000);
}
