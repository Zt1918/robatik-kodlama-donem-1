// C++ code
//
void setup()
{
  pinMode(2, OUTPUT);//led çıkış yapıldı
  pinMode(3, OUTPUT);//led çıkış yapıldı
  pinMode(4, INPUT);//4 numaralı uca bağlanan butona basıldı
}

void loop()
{
  if(digitalRead(4)==1){
  digitalWrite(2, 1);
  digitalWrite(3, 0);
}
  else{
     digitalWrite(2, 0);
     digitalWrite(3, 1);
  }
}
