#ifndef WindFunctions_h
#define WindFunctions_h
#include <Arduino.h>



//Read the wind speed from serial. Must input an address
class WindFunctions{
	public:
	//Variables

	int16_t WindDirection;
	int16_t WindSpeed;
	
	//Functions

	//Read Wind Speed
	int16_t readWindSpeed(uint8_t A_Address);
	//Read Wind Direction as 16 directions
	int16_t readWindDirection16(uint8_t B_Address);
	//Read Wind direction as 360 degrees, but you must divide by 10 to get the right number.
        int16_t readWindDirection360(uint8_t B_Address); 
	//modifies the address of the connected unit. Only one at a time. Restart when done.
	boolean ModifyAddress(uint8_t Address1, uint8_t Address2); 


	
	private:
	//Functions
	size_t readN(uint8_t *buf, size_t len);
	uint16_t CRC16_2(uint8_t *buf, int16_t len);
	void addedCRC(uint8_t *buf, int len);
	


};

#endif
