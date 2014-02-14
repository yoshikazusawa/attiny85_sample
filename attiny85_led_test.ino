
const int CDS_SENSORPIN = A1;
const int NIGHT_LEDPIN = 3;
const int BLINK_LEDPIN = 4;


void setup()
{
  pinMode(NIGHT_LEDPIN, OUTPUT);
  pinMode(BLINK_LEDPIN, OUTPUT);
  pinMode(CDS_SENSORPIN, INPUT);
}

void loop()
{
  radiate_in_night();
  blink_led();
}

void radiate_in_night() {
  int value = analogRead(CDS_SENSORPIN);
  int is_night = value >= 512;
  digitalWrite(NIGHT_LEDPIN, is_night ? HIGH : LOW);
}

void blink_led() {
  writePin(BLINK_LEDPIN, HIGH, 200);
  writePin(BLINK_LEDPIN, LOW, 200);
}

void writePin(int pin, int mode, int msec)
{
  digitalWrite(pin, mode);
  delay(msec);
}
