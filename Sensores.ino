//Void responsavel por controlar os sensores de refletancia e retorna um valor de 0 ou 1
int Linha(int Sens){
  switch(Sens){
    case 1:
      digitalWrite(AlimentaLinhaA, HIGH);
      return digitalRead(25);
      
      break;
    case 0:
      digitalWrite(AlimentaLinhaB, HIGH);
      return digitalRead(24);
      
      break;
    
  }
  
}


//---------- Sensor UltraSonico -------------
float Sonico(){
   
   return ultrasonic.convert(ultrasonic.timing(),Ultrasonic::CM);
  
}

//---------- Sensor UltraSonico -------------

//--- ---- ---- ---- ---- ---- ---- ---- ----


//------------- Iniciar Leds ----------------
#define nLedA 29
#define nLedB 30
#define nLedC 31
#define nLedD 32
#define ledDelay 50
void IniciarLeds(){
  pinMode(nLedA, OUTPUT);
  pinMode(nLedB, OUTPUT);
  pinMode(nLedC, OUTPUT);
  pinMode(nLedD, OUTPUT);
//----------------------//
  digitalWrite(nLedA, HIGH);
  delay(ledDelay);
  digitalWrite(nLedB, HIGH);
  delay(ledDelay);
  digitalWrite(nLedC, HIGH);
  delay(ledDelay);
  digitalWrite(nLedD, HIGH);
  delay(ledDelay);
  digitalWrite(nLedA, LOW);
  delay(ledDelay);
  digitalWrite(nLedB, LOW);
  delay(ledDelay);
  digitalWrite(nLedC, LOW);
  delay(ledDelay);
  digitalWrite(nLedD, LOW);
  
}
