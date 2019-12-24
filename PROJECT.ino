#include <AFMotor.h>


#include <AFMotor.h>
 
AF_Stepper STEPmotor(48, 2);
AF_DCMotor DCmotor1(1, MOTOR12_64KHZ);
AF_DCMotor DCmotor2(2, MOTOR34_64KHZ);
 
void setup() {
  Serial.begin(9600);           // set up Serial library at 9600 bps
  Serial.println("Stepper test!");
 
  STEPmotor.setSpeed(255);   
  DCmotor1.setSpeed(255); 
  DCmotor2.setSpeed(200); 
  
}
 
void loop() {
 if (Serial.available()) {  // Returns true if there is serial input.
    char ch = Serial.read();
    
    if (ch == 'q') {
      STEPmotor.step(75, FORWARD, DOUBLE); 
      STEPmotor.release();
    }  
    if (ch == 'w') {
        STEPmotor.step(75, BACKWARD, DOUBLE); 
        STEPmotor.release();
    }
    if (ch == 'a') {
      STEPmotor.step(12, FORWARD, DOUBLE); 
      STEPmotor.release();
    }  
    if (ch == 's') {
        STEPmotor.step(12, BACKWARD, DOUBLE); 
        STEPmotor.release();
    }
    if (ch == 'e') {
        DCmotor1.run(FORWARD);      
        delay(1000);
        DCmotor1.run(RELEASE);
    } 
    if (ch == 'r') {
        DCmotor1.run(FORWARD);      
        delay(300);
        DCmotor1.run(RELEASE);
    }
    if (ch == 'l') {
  
        DCmotor1.run(BACKWARD);      
        delay(100);
        DCmotor1.run(RELEASE);
    }
     if (ch == 'j') {
  
        DCmotor1.run(BACKWARD);      
        delay(3500);
        DCmotor1.run(RELEASE);
    }
    if (ch == 'h') {
        DCmotor1.run(FORWARD);      
        delay(3000);
        DCmotor1.run(RELEASE);
    } 
    if (ch == 'b') {
        DCmotor2.run(BACKWARD);      
        delay(4300);
        DCmotor2.run(RELEASE);
    }
    if (ch == 'n') {
        DCmotor2.run(FORWARD);      
        delay(4300);
        DCmotor2.run(RELEASE);
    }
    
    if (ch == 'k') {
        DCmotor2.run(FORWARD);      
        delay(50);
        DCmotor2.run(RELEASE);
    }
    if (ch == 'c') {
        DCmotor2.run(BACKWARD);      
        delay(50);
        DCmotor2.run(RELEASE);
    }
  }

 delay(50);
}

