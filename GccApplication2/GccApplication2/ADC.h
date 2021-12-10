/*
 * ADC.h
 *
 * Created: 4/12/2021 9:29:25 AM
 *  Author: Mohamed
 */ 


#ifndef ADC_H_
#define ADC_H_


#include <avr/io.h>
#include "std_macros.h"

void ADC_init(void);
uint16_t ADC_read(void);


#endif /* ADC_H_ */