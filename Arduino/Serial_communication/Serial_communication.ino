//Serial communication program
void setup() {
  //set the serial communication baud rate to 9600
  Serial.begin(9600);
}

void loop() {
  //print the line "This is a"
  Serial.println("This is a")
  //print the line "test program"
  Serial.println("test program");
  //delay of 500ms
  delay(500);
}
