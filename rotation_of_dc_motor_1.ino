int motorPin = 9;

void setup()
{
	pinMode(motorPin, OUTPUT);
  
}

void loop()
{
   //Accelerate motor 
  for (int i=0; i<=255; i++)
  {
  	analogWrite(motorPin, i);
    delay(10);
    
  }
  delay(500);
  
   for (int i=255; i>=0; i--)
  {
  analogWrite(motorPin, i);
    delay(10);
    
  }
  
  delay(500);
    
}