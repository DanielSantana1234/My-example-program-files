//Program to Fade LED
//LED connected to Pin 5
int rled = 5;
void setup() {
  //initialize pin5 as output
  pinmode(rled, OUTPUT);
}

void loop() {
  //LED brightness from min to max
  //Pass values from 0 to 255 to Pin 5
  for(int i = 0; i < 255; i++){
    analogWrite(rled,i);
    delay(10);
  }
  //LED brightness from max to min
  //Pass values from 255 to 0 to pin 5
  for(int j = 255; j > 0; j--){
    analogWrite(rled, j);
    delay(10);
  }
}
