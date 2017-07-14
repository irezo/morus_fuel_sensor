#include "main.h"
#include "i2c.h"

void write_register(uint8_t register_pointer, uint16_t register_value) {
    uint8_t data[3];
    data[0] = register_pointer;
    data[1] = register_value>>8;// MSB byte of 16bit data
    data[2] = register_value;// LSB byte of 16bit data
    HAL_I2C_Master_Transmit(&hi2c1, 0xA0, data, 3, 100);// data is the start pointer of array
}