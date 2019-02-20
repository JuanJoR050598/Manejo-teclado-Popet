#include <Servo.h>
#include <SoftwareSerial.h> 
#define PINSERVODERECHO 12
#define PINSERVOIZQUIERDO 11 
//char Mando; 
Servo servoDerecho, servoIzquierdo;

void setup() {
  pinMode (PINSERVODERECHO,OUTPUT);
  pinMode (PINSERVOIZQUIERDO, OUTPUT);
  servoDerecho.attach(PINSERVODERECHO);
  servoIzquierdo.attach(PINSERVOIZQUIERDO);
  Serial.begin(9600);
  

}

void loop() {
  if (Serial.available() > 0)
   {
    int Mando =  Serial.read();
    Serial.println(Mando);
   }    
          switch (Mando)
          {
            case 'w':case'W':
            servoDerecho.write(0);
            servoIzquierdo.write(180);
            break; 

            case 's':case'S':
            servoDerecho.write(180);
            servoIzquierdo.write(0);
            break; 

            case 'a':case'A':
            servoDerecho.write(0);
            servoIzquierdo.write(90);
            break; 

            case 'd':case'D':
            servoDerecho.write(90);
            servoIzquierdo.write(180);
            break; 
            
      
      
     

          }
   }
   }
                 

 
  
  
