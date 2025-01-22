#define Right_Op_Sensor A0
#define Front_Op_Sensor A1
#define Left_Op_Sensor  A2
#define Line_Sensor A3

#define m1a 9
#define m1b 10
#define m2a 5
#define m2b 13 

#define Start 1

int currentSpeed = 50;
//// Configurarea inițială ////
void setup() {
  pinMode(Left_Op_Sensor, INPUT_PULLUP);
  pinMode(Right_Op_Sensor, INPUT_PULLUP);
  pinMode(m1a, OUTPUT);
  pinMode(m1b, OUTPUT);
  pinMode(m2a, OUTPUT);
  pinMode(m2b, OUTPUT);
  delay(200);
}

//// Funcția principală de buclă ////
void loop() {
  if(digitalRead(Start)==1){
    if (digitalRead(Left_Op_Sensor) == 0 && digitalRead(Front_Op_Sensor) == 0 && digitalRead(Right_Op_Sensor) == 0) {  // Nu vede niciun senzor
      search();
    }
    else if (digitalRead(Left_Op_Sensor) == 0 && digitalRead(Front_Op_Sensor) == 1 && digitalRead(Right_Op_Sensor) == 0) {  // Senzorul frontal detectează adversarul
      //accel(80);
      //set_motors(currentSpeed,currentSpeed);
       set_motors(125, 125);
    }
    else if (digitalRead(Left_Op_Sensor) == 1 && digitalRead(Front_Op_Sensor) == 0 && digitalRead(Right_Op_Sensor) == 0) {  // Senzorul stâng detectează adversarul
      set_motors(-110,110);
    }
    else if (digitalRead(Left_Op_Sensor) == 0 && digitalRead(Front_Op_Sensor) == 0 && digitalRead(Right_Op_Sensor) == 1) {  // Senzorul drept detectează adversarul
      set_motors(110,-110);
    }
  }
else{
  MotorStop();
 }
}

void search(){
      if (analogRead(Line_Sensor) < 45) {
        set_motors(-130,-130);
        delay(150);
        set_motors(-130, 130);
        delay(200);
    }
    else{
      set_motors(100,100);
    }
}

//// Funcție pentru controlul motoarelor ////
void set_motors(int m1, int m2) {
  if (m1 >= 0) {
    analogWrite(m1a, 0);
    analogWrite(m1b, m1);
  } else {
    analogWrite(m1a, -m1);
    analogWrite(m1b, 0);
  }

  if (m2 >= 0) {
    analogWrite(m2a, 0);
    analogWrite(m2b, m2);
  } else {
    analogWrite(m2a, -m2);
    analogWrite(m2b, 0);
  }
}

//// Funcție pentru oprirea motoarelor ////
void MotorStop() {
  set_motors(0,0);
}

//// Funcție pentru creșterea vitezei treptat ////
void accel(int maxSpeed) {
  while (currentSpeed < maxSpeed) {
    currentSpeed += 10;
    delay(5);
    set_motors(currentSpeed, currentSpeed);
    
  }
}