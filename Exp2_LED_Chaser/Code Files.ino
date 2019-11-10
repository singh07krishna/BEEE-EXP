void setup()
{for(int i=2;i<6;i++)
  pinMode(i, OUTPUT);
}

void loop()
{
   for(int i=2;i<6;i++)
  {digitalWrite(i, HIGH);
   if(i==5)
   {digitalWrite(1, HIGH);
   }
   else
   digitalWrite(i+1, HIGH);
   delay(200); 
   digitalWrite(i, LOW);
  }
  
}