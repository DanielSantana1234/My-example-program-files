//Program: Reading Potentiometer values
//variable for storing analog values
//potentiometer connceted to pin A1
int pot;
void setup() {
  //initialize serial baud rate at 9600
  Serial.begin(9600);
  //initialize analog pin A1 as input
  pinMode(A1, INPUT);
}

void loop() {
  //Read the analog values at A1 and store in a variable
  pot = analogRead(A1);
  pot = map(pot, 0, 1023, 0, 5);
  //send the value to the serial port
  Serial.print("The Potentiometer value is ");
  Serial.println(pot);
  //delay of 200ms
  delay(200);
}
