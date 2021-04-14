#include <Servo.h>

Servo myservo_L_11;
Servo myservo_L_12;
Servo myservo_L_13;
Servo myservo_L_21;
Servo myservo_L_22;
Servo myservo_L_23;
Servo myservo_R_11;
Servo myservo_R_12;
Servo myservo_R_13;
Servo myservo_R_21;
Servo myservo_R_22;
Servo myservo_R_23;
  
int pos_L_11=90;
int pos_L_12=95;
int pos_L_13=10;
int pos_L_21=90;
int pos_L_22=80;
int pos_L_23=20;

int pos_R_11=80;
int pos_R_12=75;
int pos_R_13=165;
int pos_R_21=95;
int pos_R_22=85;
int pos_R_23=170;

void setup() {
  myservo_L_13.attach(13);
  myservo_L_12.attach(11);
  myservo_L_11.attach(9);
  myservo_L_23.attach(12);
  myservo_L_22.attach(10);
  myservo_L_21.attach(8);

  myservo_R_11.attach(19);
  myservo_R_12.attach(5);
  myservo_R_13.attach(7);
  myservo_R_21.attach(18);
  myservo_R_22.attach(4);
  myservo_R_23.attach(6); 

  myservo_L_11.write(pos_L_11);
  myservo_L_12.write(pos_L_12);
  myservo_L_13.write(pos_L_13);

  delay(1000);
  
  myservo_L_21.write(pos_L_21);
  myservo_L_22.write(pos_L_22);
  myservo_L_23.write(pos_L_23);

  delay(1000);

  myservo_R_11.write(pos_R_11);
  myservo_R_12.write(pos_R_12);
  myservo_R_13.write(pos_R_13);

  delay(1000);
  
  myservo_R_21.write(pos_R_21);
  myservo_R_22.write(pos_R_22);
  myservo_R_23.write(pos_R_23);

  delay(5000);
}
void loop() { 
  stand_up(55,80);
  delay(50000);
   
}


void stand_up(int middlePart, int endPart ){
  for (int i=0;i<=endPart;i++){
    pos_L_13 += 1;
    pos_L_23 += 1;
    pos_R_13 -= 1;
    pos_R_23 -= 1;
    myservo_L_13.write(pos_L_13);
    myservo_L_23.write(pos_L_23);
    myservo_R_13.write(pos_R_13);
    myservo_R_23.write(pos_R_23);
      if (i<=middlePart){
            pos_L_12 += 1;
            pos_L_22 += 1;
            pos_R_12 -= 1;
            pos_R_22 -= 1;
            myservo_L_12.write(pos_L_12);
            myservo_L_22.write(pos_L_22);
            myservo_R_12.write(pos_R_12);
            myservo_R_22.write(pos_R_22);
      }
    delay(75);
    }
  for (int i=0;i<=middlePart;i++){
            pos_L_12 -= 1;
            pos_L_22 -= 1;
            pos_R_12 += 1;
            pos_R_22 += 1;
            myservo_L_12.write(pos_L_12);
            myservo_L_22.write(pos_L_22);
            myservo_R_12.write(pos_R_12);
            myservo_R_22.write(pos_R_22);
          delay(75);
  }

}  
