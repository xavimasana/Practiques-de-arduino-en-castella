/***************************************************************************************************************************************************************************
                                                                
  o888.   c888o   .@@@@@@.      c8@@8c     O8OO  C88C   O88C                Xavi Masana 
   @@@@  o@@@@   @@@@@@@@@@   c@@@@@@@@@   @@@@ :@@@@O O@@@@                Lacetania
   .@@@@.@@@@c  O@@@@  C@@@o  @@@@  @@@@C  O@@@c8@@@@@ @@@@c                2n IT  
    :@@@@@@@:    @@@@C        @@@o  O@@@C   @@@@@@@@@@@@@@@                 Xais Crew Life
     :@@@@@:      @@@@@@O     @@@o          8@@@@@@@@@@@@@O                 Projecte: Per saberne més (1)
     o@@@@@C       @@@@@@@   O@@@o         .@@@@@@@@@@@@@@@    
     @@@@@@@          o@@@@.  @@@o  C@@@C    @@@@@@@@@@@@@     
    @@@@@@@@@   @@@@o  o@@@8  @@@O  8@@@O    O@@@@8 @@@@@o     
   @@@@8 @@@@@  .@@@@@@@@@@:  @@@@@@@@@@.     @@@@c @@@@@      
  8@@@@   @@@@@   O@@@@@@@     O@@@@@@8       @@@@  O@@@@                                                
                                               
 ************************************************************************************************************************************************************************/
 //*********************************************************************INCLUDE*******************************************************************************************

//*********************************************************************VARIABLES******************************************************************************************
int pin2 = 2; // PIN-es de los LED
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int timer = 100;
 //***********************************************************************SETUP*********************************************************************************************
void setup(){
pinMode(pin2, OUTPUT); // Configuración de los PIN-es como salida
pinMode(pin3, OUTPUT);
pinMode(pin4, OUTPUT);
pinMode(pin5, OUTPUT);
pinMode(pin6, OUTPUT);
pinMode(pin7, OUTPUT);
}
//*************************************************************************LOOP**********************************************************************************************
void loop() {
digitalWrite(pin2, HIGH); // Enciende y apaga secuencialmente LED-s
delay(timer);
digitalWrite(pin2, LOW);
delay(timer);
digitalWrite(pin3, HIGH);
delay(timer);
digitalWrite(pin3, LOW);
delay(timer);
digitalWrite(pin4, HIGH);
delay(timer);
digitalWrite(pin4, LOW);
delay(timer);
digitalWrite(pin5, HIGH);
delay(timer);
digitalWrite(pin5, LOW);
delay(timer);
digitalWrite(pin6, HIGH);
delay(timer);
digitalWrite(pin6, LOW);
delay(timer);
digitalWrite(pin7, HIGH);
delay(timer);
digitalWrite(pin7, LOW);
delay(timer);
digitalWrite(pin6, HIGH);
delay(timer);
digitalWrite(pin6, LOW);
delay(timer);
digitalWrite(pin5, HIGH);
delay(timer);
digitalWrite(pin5, LOW);
delay(timer);
digitalWrite(pin4, HIGH);
delay(timer);
digitalWrite(pin4, LOW);
delay(timer);
digitalWrite(pin3, HIGH);
delay(timer);
digitalWrite(pin3, LOW);
delay(timer);
}
//***********************************************************************FUNCTIONS*******************************************************************************************
