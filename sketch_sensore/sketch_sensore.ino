
int relay = 13;
int pir = 2;
int sensore = 0;

void setup() {
  pinMode (relay,OUTPUT);
  pinMode (pir,INPUT);
  

}

void loop() {
  sensore = digitalRead(pir);
  if (sensore == HIGH){
    digitalWrite (relay,HIGH);
  }
  else {
    digitalWrite(relay,LOW);
  }
 

}
