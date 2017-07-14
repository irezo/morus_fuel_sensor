#include "main.h"
#include "i2c.h"
#include "read_register.h"
#include "write_register.h"

void register_init () {

uint8_t CONF_MEAS1 = 0x08; //Pointer for Register Measurement 1 configuration
uint8_t CONF_MEAS2 = 0x09; //Pointer for Register Measurement 2 configuration
uint8_t CONF_MEAS3 = 0x0A; //Pointer for Register Measurement 3 configuration
			
uint8_t FDC_CONF = 0x0C; //Pointer to Configuration settings
	
uint16_t MEAS1_CONF_VAL = 0b0001110000000000;// CHA=CIN1, CHB=disabled, CAPDAC=0
uint16_t MEAS2_CONF_VAL = 0b0011110000000000;// CHA=CIN2, CHB=disabled, CAPDAC=0
uint16_t MEAS3_CONF_VAL = 0b0101110000000000;// CHA=CIN3, CHB=disabled, CAPDAC=0
uint16_t FDC_VAL = 0b0000110111100000;// 400S/s, REPEAT=1, MEAS1=enabled, MEAS2=enabled, MEAS3=enabled
		
uint8_t M1_MSB[2];
uint8_t M2_MSB[2];
uint8_t M3_MSB[2];
							
write_register(CONF_MEAS1, MEAS1_CONF_VAL);
write_register(CONF_MEAS2, MEAS2_CONF_VAL);
write_register(CONF_MEAS3, MEAS3_CONF_VAL);
		
write_register(FDC_CONF, FDC_VAL);
}