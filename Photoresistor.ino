int sensePin = 0;
void setup()
{
 analogRead(DEFAULT); // not necessary
 Serial.begin(9600);
}

void loop()
{
	  Serial.println(analogRead(sensePin));
      delay(500);
}