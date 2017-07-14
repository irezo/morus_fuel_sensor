#include "main.h"
#include "i2c.h"
#include "read_register.h"
#include "write_register.h"

void calibration (float *MEAS1_EMPTY, float *MEAS2_EMPTY, float *MEAS3_EMPTY) {
	float sum1=0, sum2=0, sum3=0;
	uint16_t MEAS1, MEAS2, MEAS3;
		
	uint8_t MEAS1_MSB = 0x00;//Pointer for Register MSB portion of Measurement 1
	uint8_t MEAS2_MSB = 0x02;//Pointer for Register MSB portion of Measurement 2
	uint8_t MEAS3_MSB = 0x04;//Pointer for Register MSB portion of Measurement 3
		
	uint8_t CONF_MEAS1 = 0x08;//Pointer for Register Measurement 1 configuration
	uint8_t CONF_MEAS2 = 0x09;//Pointer for Register Measurement 2 configuration
	uint8_t CONF_MEAS3 = 0x0A;//Pointer for Register Measurement 3 configuration
			
	uint8_t FDC_CONF = 0x0C;//Pointer to Configuration settings
		
	uint16_t MEAS1_CONF_VAL = 0b0001110000000000;//CHA=CIN1, CHB=disabled, CAPDAC=0
	uint16_t MEAS2_CONF_VAL = 0b0011110000000000;//CHA=CIN2, CHB=disabled, CAPDAC=0
	uint16_t MEAS3_CONF_VAL = 0b0101110000000000;//CHA=CIN3, CHB=disabled, CAPDAC=0
	uint16_t FDC_VAL = 0b0000110111100000;//400S/s, REPEAT=1, MEAS1=enabled, MEAS2=enabled, MEAS3=enabled
		
	uint8_t M1_MSB[2];//MSB measurement 1
	uint8_t M2_MSB[2];//MSB measurement 2
	uint8_t M3_MSB[2];//MSB measurement 3
							
	write_register(CONF_MEAS1, MEAS1_CONF_VAL);
	write_register(CONF_MEAS2, MEAS2_CONF_VAL);
	write_register(CONF_MEAS3, MEAS3_CONF_VAL);
		
	write_register(FDC_CONF, FDC_VAL);
	
	for (int i=0; i<3000; i++) {		
		read_register(MEAS1_MSB, M1_MSB);
		read_register(MEAS2_MSB, M2_MSB);
		read_register(MEAS3_MSB, M3_MSB);
						
		MEAS1 = M1_MSB[0] << 8 | M1_MSB[1];
		MEAS2 = M2_MSB[0] << 8 | M2_MSB[1];
		MEAS3 = M3_MSB[0] << 8 | M3_MSB[1];
								
		if (i>1000) {			
			sum1 = sum1+(float)MEAS1;
			sum2 = sum2+(float)MEAS2;
			sum3 = sum3+(float)MEAS3;
		}
		else {
			sum1 = sum1;
			sum2 = sum2;
			sum3 = sum3;
		}}
		
		*MEAS1_EMPTY = sum1/2000;//empty container - measurement 1
		*MEAS2_EMPTY = sum2/2000;//empty container - measurement 2
		*MEAS3_EMPTY = sum3/2000;//empty container - measurement 3
}