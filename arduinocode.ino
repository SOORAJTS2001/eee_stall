int ldr=A0;
int cntrl = 7;
#include<Servo.h>
Servo myservo; 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ldr,INPUT);
  pinMode(cntrl,INPUT_PULLUP);
  analogWrite(ldr,LOW);
  myservo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(analogRead(ldr)==HIGH)
  {
    myservo.write(0);
    delay(1000);
    Serial.println("kitti");

    /*while (true){};*/
  }
  if(digitalRead(cntrl)==LOW)
  {
    myservo.write(90);
    delay(1000);
  }
  

}
