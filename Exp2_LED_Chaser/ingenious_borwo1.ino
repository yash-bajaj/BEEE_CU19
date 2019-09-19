void setup(){
for (int i = 10; i <= 13; i++) {
pinMode(i, OUTPUT);
}
}
void loop(){
for (int i = 10; i <=13; i++) {

if (i==13){
digitalWrite(13,HIGH);
digitalWrite(10,HIGH);
delay(400);
  digitalWrite(13,LOW);
digitalWrite(10,LOW);
  delay(400);
}
  else{
digitalWrite(i,HIGH);
digitalWrite(i+1,HIGH);
delay(400);
digitalWrite(i,LOW);
digitalWrite(i+1,LOW);
    delay(400);
  }
}
}
