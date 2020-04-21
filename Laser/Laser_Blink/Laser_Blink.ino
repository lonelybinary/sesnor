/***************************************************************************

  Written by Taylor for http://lonelybinary.com
  BSD license, all text above must be included in any redistribution
  
 ***************************************************************************/

#define LaserPin 8

void setup ()
{
   pinMode (LaserPin, OUTPUT); 
}
void loop () {
   digitalWrite (LaserPin, HIGH); 
   delay (500); 
   digitalWrite (LaserPin, LOW); 
   delay (500);
}
