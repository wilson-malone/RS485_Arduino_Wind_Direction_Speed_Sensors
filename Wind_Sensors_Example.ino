#include <WindFunctions.h>
WindFunctions wind_functions; //creating an object for the Wind Functions library
int16_t speed;
int16_t direction;
char *direction_list[] = { "   N", " NNE", "  NE", " ENE", "   E", " ESE", "  SE", " SSE", "   S", " SSW", "  SW", " WSW", "   W", " WNW", "  NW", " NNW", "   N", "INIT", "FAIL",};


void setup() {
  Serial.begin(9600);
  Serial.println("Serial Started");

}

void loop() {
  
  speed = wind_functions.readWindSpeed(0x03);  // Read in meters/sec

  direction = wind_functions.readWindDirection(0x02); //Returns wind direction as an 8 bit variable of 17 directions. North gets transmitted both as 0x00 and 0x11. I have no idea why.



  Serial.println(speed);
  Serial.println(direction_list[direction]);

  delay(1000);

}
