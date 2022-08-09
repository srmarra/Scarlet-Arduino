#define MotorA1 53
#define MotorA2 52

#define MotorB1 51
#define MotorB2 50

#define FmotorA 7
#define FmotorB 6

#define VelPadrao 150
//Responsalvel por iniciar pre definiçoes dos motores
void IniciarMotores(){
  pinMode(MotorA1, OUTPUT);
  pinMode(MotorA2, OUTPUT);
  pinMode(MotorB1, OUTPUT);
  pinMode(MotorB2, OUTPUT);
  analogWrite(FmotorA, VelPadrao);
  analogWrite(FmotorB, VelPadrao); 
  ControlMotor(4);
}


void ControlMotor(int Dir){
  switch(Dir){
    case 0:
      digitalWrite(MotorA1, LOW);
      digitalWrite(MotorA2, LOW);
      digitalWrite(MotorB1, LOW);
      digitalWrite(MotorB2, LOW);
      break;
    case 1:
      digitalWrite(MotorA1, HIGH);
      digitalWrite(MotorA2, LOW);
      digitalWrite(MotorB1, HIGH);
      digitalWrite(MotorB2, LOW);
      break;
    case 2:
      digitalWrite(MotorA1, HIGH);
      digitalWrite(MotorA2, LOW);
      digitalWrite(MotorB1, LOW);
      digitalWrite(MotorB2, LOW);
      break;
    case 3:
      digitalWrite(MotorA1, LOW);
      digitalWrite(MotorA2, HIGH);
      digitalWrite(MotorB1, HIGH);
      digitalWrite(MotorB2, LOW);
      break;
    case -1:
      digitalWrite(MotorA1, LOW);
      digitalWrite(MotorA2, HIGH);
      digitalWrite(MotorB1, LOW);
      digitalWrite(MotorB2, HIGH);
      break;
    case 4:
      digitalWrite(MotorA1, HIGH);
      digitalWrite(MotorA2, LOW);
      digitalWrite(MotorB1, LOW);
      digitalWrite(MotorB2, HIGH);
      break;
    case 5:
      digitalWrite(MotorA1, LOW);
      digitalWrite(MotorA2, HIGH);
      digitalWrite(MotorB1, HIGH);
      digitalWrite(MotorB2, LOW);
      break;
    
  }
  
}


void Fmotor(int f){
  analogWrite(FmotorA, f);
  analogWrite(FmotorB, f); 
  

  
}
