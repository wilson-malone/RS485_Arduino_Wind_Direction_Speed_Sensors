# RS485_Wind_Direction_Speed_Sensors_Arduino
Library to operate the RS485 wind speed and direction sensors available for Arduino (anemometer and wind vane)
This library operates using the RS485 shield for Arduino from DFRobot https://www.dfrobot.com/product-1024.html
It uses on-board serial and does NOT use software serial.
https://www.dfrobot.com/product-2340.html
https://www.dfrobot.com/product-2339.html

This library could be paired with a weather station device to provide wind speed and direction information, or it may be paired with a microcontroller operated wind turbine to seek prevailing wind direction.

Create a new folder in your arduino libraries folder and put WindFunctions.cpp and WindFunctions.h into it. 
This library is called from the main program the normal way.
