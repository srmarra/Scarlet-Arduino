//Responsavel pelo sensor ultrasonico
#include <Ultrasonic.h>
#define Trigger 27 
#define Echo 28
#define AlimentaSonico 26
Ultrasonic ultrasonic(Trigger, Echo);
//-----------------------------------
int vermelho = 7.54;
#define AlimentaLinhaA  23
#define AlimentaLinhaB  22
#define LinhaA 25
#define LinhaB 26

void setup() {
  
  Alimentacoes();
  IniciarMotores();
  Linha(1);
  Linha(0);;
  IniciarLeds();
  ControlMotor(0);
  Fmotor(140);
  
  
}

void loop() {
 Obstaculo();
 SeguidorDeLinha();
  

}


//Responsalvel por alimentações externas pelas portas digitais
void Alimentacoes(){
  pinMode(AlimentaLinhaA,OUTPUT);
  pinMode(AlimentaLinhaB,OUTPUT);

  
  digitalWrite(AlimentaLinhaA, LOW);
  digitalWrite(AlimentaLinhaB, LOW);

   

  pinMode(AlimentaSonico,OUTPUT);
  digitalWrite(AlimentaSonico,HIGH);
  
}
