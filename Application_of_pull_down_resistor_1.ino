//Reads the state of a button and displays it on a screen
int buttonPin = 8;


void setup()
{
	// sets the button pin as an input
  	pinMode(buttonPin, INPUT);
  
  //allows us to listen to serial communications from the arduino
  Serial.begin(9600);
}

void loop()
{
    // print the button state to a serial terminal 
  Serial.println(digitalRead(buttonPin));
  delay(1000);
  //waits a  sec, then print again 
}