//Global her yerde geçerli değişken
int kirmizi=2;
int beyaz=3;
void setup()
{
  pinMode(kirmizi, OUTPUT);
  pinMode(beyaz, OUTPUT);
}

void loop()
{
  digitalWrite(kirmizi, 1);
  digitalWrite(beyaz, 0);
  delay(100); // Wait for 1000 millisecond(s)
  digitalWrite(kirmizi, 0);
  digitalWrite(beyaz, 1);
  delay(100); // Wait for 1000 millisecond(s)
}