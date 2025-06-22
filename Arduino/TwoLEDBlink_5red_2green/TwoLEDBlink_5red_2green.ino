//Program to blink red LED 5 times and green LED 2 times
//red LED: pin 11, green LED: pin 8
//initialize the variables
int rled = 11;
int gled = 8;
void setup() {
  // put your setup code here, to run once:
  //initialize pins 8 and 11
  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //blink red LED 5 times
  for(int i = 0; i < 5; i++){
    digitalWrite(rled, HIGH);
    delay(1000);
    digitalWrite(rled, LOW);
    delay(1000);
  }
  //blink green LED 2 times
  for(int j = 0; j < 2; j++){
    digitalWrite(gled, HIGH);
    delay(1000);
    digitalWrite(gled, LOW);
    delay(1000);
  }
}
