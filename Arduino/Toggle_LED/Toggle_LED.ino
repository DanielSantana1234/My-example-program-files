//Program to toggle ON LED with button press
//LED connected to pin 4
int led = 4;
//button connected to pin 10
int button = 10;
void setup() {
  // put your setup code here, to run once:
  //initialize pin 4 as output
  pinmode(led, OUTPUT);
  //initialize pin 10 as input
  pinmode(button, INPUT);
  //initialize LED state variable
  bool ledstate = LOW;
}

void loop() {
  // put your main code here, to run repeatedly:
  //initialize the variables for storing the button state
  bool button_state;
  
  //read the button state and store into a variable
  button_state = digitalread(button)
  //if the button state pressed the toggle the LED
  if(button_state == LOW){
    ledstate = !ledstate;
    digitalwrite(led, ledstate);
  }
}
