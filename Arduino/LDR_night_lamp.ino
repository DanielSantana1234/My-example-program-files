//Program: LDR night lamp
//LED connected to pin 5
//LDR pull down connection at pin A4
//variable for storing analog values
int var;
//max value of LDR
int ldrmax = 700;
//min value of LDR
int ldrmin = 300;
//variable for pin of LED
int rled = 5;
void setup() {
  //Initialize pin 5 as output
  pinMode(rled, OUTPUT);
  //Initialize pin A4 as input
  pinMode(A4, INPUT);
}

void loop() {
  //read the analog value at pin A4 and store in a variable
  var = analogRead(A4);
  // if value > ldrmax, turn OFF the LED
  if(var > ldrmax)
    digitalWrite(rled, LOW);
  // if value < ldrmin, turn ON the LED
  else if(var < ldrmin)
    digitalWrite(rled, HIGH);
  // delay of 200 ms
  delay(200);

}
