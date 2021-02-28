void setup()
{
Serial.begin(9600);
 
pinMode(13, OUTPUT);
  
}

void loop()
{
  while (Serial.available() ==0);
  
  int val = Serial.read() - '0';
  if (val == 1) 
  {
    Serial.println("Led is on");
    digitalWrite(13, HIGH);
    
  }
 else if ( val == 0 )
  {
   Serial.println("Led is off ");
    digitalWrite(13, LOW);
  }
  else
  {
  Serial.println("Invalid");
  }
 
Serial.flush();
  
  
}
