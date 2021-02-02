boolean lastButton = LOW;
int ledLevel = 0;
boolean currentButton = LOW;






boolean debounce(boolean last)
{
boolean current = digitalRead(8);
  if (last != current)
  {
  delay(5);
    current = digitalRead(8);
    
  }
  return current;
  
}


void setup()
{
	pinMode(8, INPUT);
  	pinMode(11, OUTPUT);
  
}

void loop()
{
  currentButton = debounce(lastButton);
  if (lastButton == LOW && currentButton == HIGH)
  {
   ledLevel = ledLevel + 51;
      
  }
	lastButton = currentButton;
  if (ledLevel > 255) ledLevel=0;
  
  analogWrite(11, ledLevel);
}
