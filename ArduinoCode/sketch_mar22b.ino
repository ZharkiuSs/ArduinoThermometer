
int led=2;
int touch=15;
int touch1=4;
int lim;
int lim1;
int limita;



void setup() {
  Serial.begin(115200);
  pinMode(led, OUTPUT);

}

void loop() {
  lim=touchRead(touch);
  lim1=touchRead(touch1);
  limita=lim+lim1;
  Serial.print(" lim: ");
  Serial.print(lim);
  Serial.print(" lim1: ");
  Serial.print(lim1);
  Serial.print(" limita: ");
  Serial.print(limita);
  Serial.print("\n");
  
  if(limita > 70 && limita <= 110){
    digitalWrite(led, HIGH); 
  }
  if(limita < 50 || limita > 120){
    digitalWrite(led, LOW);   
  }

  
  delay(500);

}
