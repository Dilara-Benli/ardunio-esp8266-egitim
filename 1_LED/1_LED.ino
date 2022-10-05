//D0 ledi 500ms arayla yakıp söndürme, bu arada yarım yanan ledleri söndürme
void setup() {
  // D0 portunu çıkış yap
  pinMode(D0,OUTPUT);
  //yarım yanan Ledleri söndürmek için
  pinMode(D1,OUTPUT);
  pinMode(D2,OUTPUT);
  pinMode(D3,OUTPUT);
  pinMode(D4,OUTPUT);
  digitalWrite(D1,LOW); digitalWrite(D2,LOW); digitalWrite(D3,LOW); digitalWrite(D4,LOW);
}

void loop() {
  digitalWrite(D0,HIGH);    //D0daki Ledi yak
  delay(500);               //500ms bekle
  digitalWrite(D0,LOW);     //D0daki Ledi söndür
  delay(500);       
}
