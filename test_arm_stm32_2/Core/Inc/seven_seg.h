#include "stm32f1xx_hal.h"
#include "main.h"

void sevenSeg_set_number(uint8_t number);

// Pins are connected in order as follows
// a b c d e f g dp
// 6 5 3 2 1 7 8 4
uint16_t digit;

void setDigitSelectPin(uint16_t dig ){
	digit = dig;
}

enum segment_map {  
    a = 0b00100000,
    b = 0b00010000,
    c = 0b00000100, 
    d = 0b00000010,
    e = 0b00000001,
    f = 0b01000000,
    g = 0b10000000,
    dp = 0b10000000, 
};

const uint8_t segment_map_arr[] = {
    0b00100000,
    0b00010000,
    0b00000100, 
    0b00000010,
    0b00000001,
    0b01000000,
    0b10000000,
    0b00001000
};

const uint8_t digit_map[] = {
	a|b|c|d|e|f,
    b|c,
    a|b|g|e|d,
    a|b|g|c|d,
    f|g|b|c,
    a|f|g|c|d,
    a|f|e|d|c|g,
    a|b|c,
    a|b|c|d|e|f|g,
    a|b|c|d|f|g
};

void sevenSeg_set_number(uint8_t num){
    HAL_GPIO_WritePin(GPIOA, UINT8_MAX, GPIO_PIN_SET);

    HAL_GPIO_WritePin(GPIOA, digit, GPIO_PIN_SET);
    HAL_GPIO_WritePin(GPIOA, digit_map[num], GPIO_PIN_RESET);
}
