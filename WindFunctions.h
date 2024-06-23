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
	int16_t readWindSpeed(uint8_t A_Address);
	int16_t readWindDirection16(uint8_t B_Address); //16 directions
        int16_t readWindDirection360(uint8_t B_Address) //360 degrees, but you must divide by 10 to get the right number.
	boolean ModifyAddress(uint8_t Address1, uint8_t Address2); //modifies the address of the connected unit. Only one at a time. Restart when done.


	
	private:
	//Functions
	size_t readN(uint8_t *buf, size_t len);
	uint16_t CRC16_2(uint8_t *buf, int16_t len);
	void addedCRC(uint8_t *buf, int len);
	


};

#endif
