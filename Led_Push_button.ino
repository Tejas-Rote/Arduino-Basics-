void setup()
{
	pinMode(8, INPUT);
  	pinMode(13, OUTPUT);
  
}

void loop()
{
	if(digitalRead(8) == HIGH)
    {
    digitalWrite(13, HIGH);
    }
  	else
    {
    digitalWrite(13, LOW);
    }

}
