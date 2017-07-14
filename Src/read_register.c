#include "main.h"
#include "i2c.h"

void read_register(uint8_t register_pointer, uint8_t* receive_buffer) {
    HAL_I2C_Master_Transmit(&hi2c1, 0xA0, &register_pointer, 1, 100);  
	  HAL_I2C_Master_Receive(&hi2c1, 0xA0, receive_buffer, 2, 100);   
}