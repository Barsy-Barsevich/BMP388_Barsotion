#pragma once


uint8_t BMP388_I2C_Init(uint8_t addr, int sda, int scl);
uint8_t BMP388_I2C_readRegister(uint8_t reg, uint8_t *buf, uint8_t size);
uint8_t BMP388_I2C_writeRegister(uint8_t reg, uint8_t *buf, uint8_t size);

