void setup()
{
pinMode (2, OUTPUT);
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);  
pinMode (5, OUTPUT);  
pinMode (6, OUTPUT);  
pinMode (7, OUTPUT);  
pinMode (8, OUTPUT);  
pinMode (9, OUTPUT);
}

void loop()
{
   int i;
   for(i=2;i<=9;i++)
    {
      digitalWrite(i, HIGH);
      delay(100);
      digitalWrite(i, LOW);
      delay(100);
    }
    for(i=9;i>=2;i--)
    {
      digitalWrite(i, HIGH);
      delay(100);
      digitalWrite(i, LOW);
      delay(100);
    }
    for(i=2;i<=9;i++)
    {
      digitalWrite(i, HIGH);
      delay(100);
      digitalWrite(i+1, LOW);
      delay(100);
    }
        for(i=9;i>=2;i--)
    {
      digitalWrite(i,LOW);
      delay(100);
      digitalWrite(i, HIGH);
    }
    for(i=2;i<=9;i++)
    {
      digitalWrite(i, LOW);
      delay(100);
      digitalWrite(i, HIGH);   
    }
    
    for(i=9;i>=2;i=i-2)
    {
      digitalWrite(i, LOW);
      delay(200);
    }
    for(i=8;i>=2;i=i-2)
    {
      digitalWrite(i, LOW);
      delay(200);
    }

}
