int triggerpin=5;
int echopin=6;
float dis;
long int dur;
void setup()
{
  pinMode(triggerpin,OUTPUT);
  pinMode(echopin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(triggerpin,LOW);
  delayMicroseconds(2);

  digitalWrite(triggerpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerpin,LOW);
  dur=pulseIn(echopin,HIGH);
  dis=dur*0.017;
  Serial.print("Distance : ");
  Serial.println(dis);
}