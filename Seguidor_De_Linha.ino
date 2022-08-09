#define Inverso 180
#define TempFrente 50
void SeguidorDeLinha(){

  if(Linha(0) & Linha(1)){
      ControlMotor(1);
  }

  if(!Linha(0) & !Linha(1)){
      ControlMotor(1);
  }


 #define delayLinha 5
 if(!Linha(0) & Linha(1)){
    while(Linha(1)){
      ControlMotor(5);
    }
    ControlMotor(4);
    delay(Inverso);
    ControlMotor(1);
    delay(TempFrente);
    
 }

 if(Linha(0) & !Linha(1)){
    
    while(Linha(0)){
      ControlMotor(4);
    }
    ControlMotor(5);
    delay(Inverso);
    ControlMotor(1);
    delay(TempFrente);

 }

  if(Linha(0) & Linha(1)){
      ControlMotor(1);
  }

  if(!Linha(0) & !Linha(1)){
     ControlMotor(1);
  }
 
  
  
}
