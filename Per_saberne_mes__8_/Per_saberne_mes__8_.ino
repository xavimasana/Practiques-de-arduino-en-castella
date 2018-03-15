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
int pinArray [] = { 2,3,4,5,6,7,8,9,10,11,12 };
int controlLed = 13; // LED de control
int waitNextLed = 100;
int tailLength = 4;
int lineSize = 11;
 //***********************************************************************SETUP*********************************************************************************************
void setup() // Configuración de los PIN-es como salida digital
{
int i;
pinMode (controlLed, OUTPUT);
for (i=0; i< lineSize; i++)
{
pinMode(pinArray[i], OUTPUT);
}
}
//*************************************************************************LOOP**********************************************************************************************
void loop()
{
int i;
// Se establece la longitud de la cola en un contador
int tailCounter = tailLength;
// Se enciende el LED de control para indicar el inicio del loop
digitalWrite(controlLed, HIGH);
for (i=0; i<lineSize; i++)
{
digitalWrite(pinArray[i],HIGH); // Se encienden consecutivamente los LED
// Esta variable de tiempo controla la velocidad a la que se mueve la estrella
delay(waitNextLed);
if (tailCounter == 0)
{
// Se apagan los LED-s en función de la longitud de la cola.
digitalWrite(pinArray[i-tailLength],LOW);
}
else
if (tailCounter > 0)
tailCounter--;
}
for (i=(lineSize-tailLength); i<lineSize; i++)
{
digitalWrite(pinArray[i],LOW); // Se apagan los LED
// Esta variable de tiempo controla la velocidad a la que se mueve la estrella
delay(waitNextLed);
}
}
//***********************************************************************FUNCTIONS*******************************************************************************************
