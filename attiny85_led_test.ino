const int LEDPIN = 4;

void setup()
{
  pinMode(LEDPIN, OUTPUT);
}

void loop()
{
  writePin(LEDPIN, HIGH, 1000);
  writePin(LEDPIN, LOW, 1000);
}

void writePin(int pin, int mode, int msec)
{
  digitalWrite(pin, mode);
  delay(msec);
}
