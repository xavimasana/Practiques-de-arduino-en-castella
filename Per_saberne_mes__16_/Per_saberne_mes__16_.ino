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
int LightPin = 3; // selecciona el pin de entrada para el sensor de luz
int ledPin = 13; // selecciona el pin para el LED
int val = 0; // variable para almacenar el valor capturado desde el sensor
//***********************************************************************SETUP*********************************************************************************************
void setup() {
pinMode(ledPin, OUTPUT); // declara el ledPin en modo salida
}
//*************************************************************************LOOP**********************************************************************************************
void loop() {
val = analogRead(LightPin); //lee el valor del sensor
digitalWrite(ledPin, HIGH); // enciende el LED
delay(val); // detiene el programa por un tiempo
digitalWrite(ledPin, LOW); // apaga el LED
delay(val); // detiene el programa por un tiempo
}


//***********************************************************************FUNCTIONS*******************************************************************************************
