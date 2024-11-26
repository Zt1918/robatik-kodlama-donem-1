// C++ code
//
int ak=6;
int as=5;
int ay=4;
int yk=3;
int yy=2;
void setup()//bir sefer çalışır.
{
  pinMode(2, OUTPUT);//çıkış yapıldı.
  pinMode(3, OUTPUT);//çıkış yapıldı.
  pinMode(4, OUTPUT);//çıkış yapıldı.
  pinMode(5, OUTPUT);//çıkış yapıldı.
  pinMode(6, OUTPUT);//çıkış yapıldı.
}

void loop()
{
  //ARAÇ KIRMIZI IŞIĞI YANDI BAŞLADI
  digitalWrite(ak, HIGH);
  digitalWrite(as, LOW);
  digitalWrite(ay, LOW);
  digitalWrite(yy, 1);
  digitalWrite(yk, 0);
  delay(3000); // Wait for 1000 millisecond(s)
  //ARAÇ KIRMIZI IŞIĞI YANDI BİTTİ.
  
  //ARAÇ SARI IŞIĞI YANDI BAŞLADI
  digitalWrite(ak, 0);
  digitalWrite(as, 1);
  digitalWrite(ay, 0);
  digitalWrite(yy, 0);
  digitalWrite(yk, 1);
  delay(1000); // Wait for 1000 millisecond(s)
  //ARAÇ SARI IŞIĞI YANDI BİTTİ.
  
  //ARAÇ YEŞİL IŞIĞI YANDI BAŞLADI
  digitalWrite(ak, 0);
  digitalWrite(as, 0);
  digitalWrite(ay, 1);
  digitalWrite(yy, 0);
  digitalWrite(yk, 1);
  delay(6000); // Wait for 1000 millisecond(s)
  //ARAÇ YEŞİL IŞIĞI YANDI BİTTİ.
  
  //ARAÇ SARI IŞIĞI YANDI BAŞLADI
  digitalWrite(ak, 0);
  digitalWrite(as, 1);
  digitalWrite(ay, 0);
  digitalWrite(yy, 0);
  digitalWrite(yk, 1);
  delay(1000);
  //ARAÇ SARI IŞIĞI YANDI BİTTİ.
}