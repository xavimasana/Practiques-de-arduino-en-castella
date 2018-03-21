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
int ledPin = 13;
int piezoPin = 2;
int THRESHOLD = 1;
int val = 0; 
int t = 0;
//***********************************************************************SETUP*********************************************************************************************
void setup() {
pinMode(ledPin, OUTPUT);
Serial.begin(19200);
Serial.println("ready"); // indicador de espera
}
//*************************************************************************LOOP**********************************************************************************************
void loop() {
digitalWrite(ledPin,LOW); // indicador de reposo (esperando)
val = analogRead(piezoPin); // lectura de valor del piezoeléctrico
if( val > THRESHOLD ) { // si el valor leído es superior al mínimo establecido
digitalWrite(ledPin, HIGH); // activa salida 13
t = 0;
while(analogRead(piezoPin) > THRESHOLD) {
t++;
} // wait for it to go LOW (espera con una pequeña histéresis)
if(t>100) { // escribe en el puerto
Serial.print("knock! ");//Serial.println(t);
}
}
}
//***********************************************************************FUNCTIONS*******************************************************************************************
