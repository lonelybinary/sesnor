/*
  0-1023 with 1023 being very bright, and 0 being very dark.

  TEMT6000 Pin  ---  Arduino Pin
       SIG                A0
       GND                GND
       VCC                5V
 */
#define temt6000Pin 0

void setup() {
Serial.begin(9600);
}

void loop() {
int value = analogRead(temt6000Pin);
Serial.println(value);

delay(100);
}
