#define ObsMaxDistancia 18
void Obstaculo(){
  if(Sonico() <= ObsMaxDistancia){
    ControlMotor(0);
    delay(200);
    ControlMotor(5);
    delay(740);
    ControlMotor(1);
    delay(300);
    ControlMotor(4);
    delay(740);
    ControlMotor(1);
    delay(600);
    ControlMotor(4);
    delay(740);
    ControlMotor(1);
    delay(320);
    ControlMotor(5);
    delay(740);
    ControlMotor(0);
    delay(120);
    ControlMotor(-1);
    delay(200);
    ControlMotor(0);
  }
}
