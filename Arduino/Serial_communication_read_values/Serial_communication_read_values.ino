//Program to control LED through Serial comm
//LED connected to Pin 5
int led = 5;
//initialize character for storing data from computer
char data;
void setup() {
  //initialize the serial comm at 9600 baud rate
   Serial.begin(9600);
  //initialize pin 5 as output
  pinMode(led, OUTPUT);
}

void loop() {
  //check if data has been received in the serial buffer
  if(Serial.available() > 0){
    //then read the serial buffer and store in a variable
    data = Serial.read();
    //if the character received is 1, then turn ON the LED
    if(data == '1'){
      digitalWrite(led, HIGH);
      Serial.println("LED is ON");
    }
    //else if the character received is 0, then turn off the LED 
    else if(data == '0'){
      digitalWrite(led, LOW);
      Serial.println("LED is OFF"); 
    }
  }
}
