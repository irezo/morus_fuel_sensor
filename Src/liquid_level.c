#include "main.h"
#include "i2c.h"
#include "read_register.h"
#include "write_register.h"

int level_step (float level) {//liquid level 5% accuracy
	if (level>100)
		level=100;
	else if (level>95 && level<100)
		level=95;
	else if (level>90 && level<95)
		level=90;
	else if (level>85 && level<90)
		level=85;
	else if (level>80 && level<85)
		level=80;
	else if (level>75 && level<80)
		level=75;
	else if (level>70 && level<75)
		level=70;
	else if (level>65 && level<70)
		level=65;
	else if (level>60 && level<65)
		level=60;
	else if (level>55 && level<60)
		level=55;
	else if (level>50 && level<55)
		level=50;
	else if (level>45 && level<50)
		level=45;
	else if (level>40 && level<45)
		level=40;
	else if (level>35 && level<40)
		level=35;
	else if (level>30 && level<35)
		level=30;
	else if (level>25 && level<30)
		level=25;
	else if (level>20 && level<25)
		level=20;
	else if (level>15 && level<20)
		level=15;
	else if (level>10 && level<15)
		level=10;
	else if (level>5 && level<10)
		level=5;
	else if (level<5)
		level=0;

return level;
}

float median_filter (float input[5]) {//median filter
	float output[5];
	float dummy;
	
	for (int i=0; i<5; i++) {
		float min=input[i];
		for (int j=i+1; j<5; j++) {
			if (input[j]<min) {
				dummy=min;
				min=input[j];
				input[j]=dummy;
		}
		output[i]=min;
	}
}
	return output[2];//median value
}

void liquid_level (float *MEAS1_EMPTY, float *MEAS2_EMPTY, float *MEAS3_EMPTY, float *MEAS1, float *MEAS2, float *MEAS3, int *fuel_level, float *level) {
	float level_pom=0;
	float sum1=0, sum2=0, sum3=0;
	float m1=0, m2=0, m3=0;
	float data1[5], data2[5], data3[5];
	uint8_t M1_MSB[2], M2_MSB[2], M3_MSB[2];
	
	uint8_t MEAS1_MSB = 0x00;//Pointer for Register MSB portion of Measurement 1
	uint8_t MEAS2_MSB = 0x02;//Pointer for Register MSB portion of Measurement 2
	uint8_t MEAS3_MSB = 0x04;//Pointer for Register MSB portion of Measurement 3
	
	for (int j=0; j<5; j++) {
		for (int i=0; i<400; i++) {			
			read_register(MEAS1_MSB, M1_MSB);
			read_register(MEAS2_MSB, M2_MSB);
			read_register(MEAS3_MSB, M3_MSB);
						
			*MEAS1 = M1_MSB[0] << 8 | M1_MSB[1];
			*MEAS2 = M2_MSB[0] << 8 | M2_MSB[1];
			*MEAS3 = M3_MSB[0] << 8 | M3_MSB[1];
				
			sum1 = sum1+(float)*MEAS1;
			sum2 = sum2+(float)*MEAS2;
			sum3 = sum3+(float)*MEAS3;
		}
		
		m1 = sum1/400;
		m2 = sum2/400;
		m3 = sum3/400;
	
		sum1 = 0;
		sum2 = 0;
		sum3 = 0;
		
		data1[j] = m1;
		data2[j] = m2;
		data3[j] = m3;
	}
		
	m1 = median_filter(data1);
	m2 = median_filter(data2);
	m3 = median_filter(data3);
		
	level_pom = (m1-*MEAS1_EMPTY)/(m2-*MEAS2_EMPTY)*10+5;
	 
	if (level_pom>25)
		*level = level_pom;//float liquid level
	else if (level_pom<25)
		*level = level_pom*5-100;//float liquid level
					
	if (*level>100)
		*level=100;
	else if (*level<0)
		*level=0;
		
	*fuel_level = level_step(*level);//liquid level 5% accuracy
}