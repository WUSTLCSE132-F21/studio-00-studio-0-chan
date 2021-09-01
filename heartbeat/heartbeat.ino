void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  int time = 0;
  while(1){
    digitalWrite(13,HIGH);
    Serial.print(time);
    digitalWrite(13,LOW);
    Serial.println(" sec have elapsed");
    Serial.println(millis());
    time = time + 1;
    delay(1000);  
  }
}
