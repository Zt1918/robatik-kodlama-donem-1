void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  String girilen_deger="";//girilen değeri tutan değişken

  if(Serial.available()(
    girilen_deger=Serial.readString();
    Serial.print("girilen değer:");
    Serial.println(girilen_değer);
  }

    if(girilen_deger=="kırmızı");
       digitalWrite(3,1);
       delay(3000);
       digitalWrite(3,0);
    }
      if(girilen_deger=="sarı");
       digitalWrite(4,1);
       delay(3000);
       digitalWrite(4,0);
      }
      }
  
}
