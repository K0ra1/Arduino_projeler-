int i;

void setup() {
  for(i = 2; i <= 6; i++) pinMode(i, OUTPUT);
  pinMode(7, OUTPUT);  
}

void loop() {

  // LED'leri sırayla yak + buzzer
  for(i = 2; i <= 6; i++){
    digitalWrite(i, HIGH);
    tone(7, 3000);     
    delay(500);
    noTone(7);
    delay(500);
  }

  // LED'leri sondan başa doğru söndür
  for(i = 6; i >= 2; i--){
    digitalWrite(i, LOW);
    tone(7, 3000);     
    delay(500);
    noTone(7);
    delay(500);
  }
}
