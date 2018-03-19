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
int ledPin1 = 8; // Selección de PIN para cada LED
int ledPin2 = 7;
int ledPin3 = 6;
int inPin= 1; // selecciona la entrada analógica 1 (potenciómetro)
void turn_off() { //Apaga los 3 LEDS
digitalWrite(ledPin1, LOW);
digitalWrite(ledPin2, LOW);
digitalWrite(ledPin3, LOW);
}
 //***********************************************************************SETUP*********************************************************************************************
void setup() {
pinMode(ledPin1, OUTPUT); // declara LEDs como salidas
pinMode(ledPin2, OUTPUT);
pinMode(ledPin3, OUTPUT);
turn_off(); //
}
//*************************************************************************LOOP**********************************************************************************************
void loop(){
int val;
val= analogRead(inPin); // lee el valor de la señal analógica
turn_off();
// Si el valor de la señal medida es > 256 enciende LED del PIN8
if (val>= 256) digitalWrite(ledPin1, HIGH);
// Si el valor de la señal medida es > 512 enciende LED del PIN7
if (val>= 512) digitalWrite(ledPin2, HIGH);
// Si el valor de la señal medida es > 758 enciende LED del PIN6
if (val>= 768) digitalWrite(ledPin3, HIGH);
}
//***********************************************************************FUNCTIONS*******************************************************************************************
