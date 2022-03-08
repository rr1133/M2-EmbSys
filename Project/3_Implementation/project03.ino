#define D4 4
#define D5 5
#define D6 6
#define D7 7

LiquidCrystal load(RS, EN, D4, D5, D6, D7);

void setup()
{
  lcd.begin(16, 2);

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

long duration, distance;
void loop()
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distance : ");
  lcd.print(distance);
  lcd.println("cm");
  delay(1000);

  digitalWrite(tripPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin,HIGH);
  distance = (duration/2) / 29.1;
}
