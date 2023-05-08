/******************************************************************************
 * File Name: Gpio.h
 * Description: Header file of Gpio driver
 * Author: - Doha Eid
 *   	   - Amira Mohamed
 *   	   - Mayar Ehab
 *   	   - Mariam Ezzat
 ******************************************************************************/
#ifndef GPIO_H
#define GPIO_H
/*******************************************************************************************
 * 											Includes										*
 ******************************************************************************************/
#include "../Lib/Std_Types.h"
/*******************************************************************************************
 * 											Definitions									*
 *******************************************************************************************/
/*PortName*/
#define GPIO_A 'A'
#define GPIO_B 'B'
#define GPIO_C 'C'
#define GPIO_D 'D'

/*PinNum*/
#define PIN_0 		0
#define PIN_1 		1
#define PIN_2 		2
#define PIN_3 		3
#define PIN_4 		4
#define PIN_5 		5
#define PIN_6 		6
#define PIN_7 		7
#define PIN_8 		8
#define PIN_9 		9
#define PIN_10		10

/*PinMode*/
#define GPIO_INPUT  0x00
#define GPIO_OUTPUT 0x01
#define GPIO_AF     0x02
#define GPIO_ANALOG 0x03

/*DefaultState*/
#define GPIO_PUSH_PULL  0x00
#define GPIO_OPEN_DRAIN 0x01

/* Pull-Up Pull-Down*/
#define GPIO_NO_PULL_UP_PULL_DOWN 	0x00
#define GPIO_PULL_UP				0x01
#define GPIO_PULL_DOWN				0x02
#define GPIO_RESERVED				0x03
/*Data*/
#define LOW  0x00
#define HIGH 0x01

#define OK 	   1
#define NOK    0

/******************************************************************************************************
 *                                Functions Prototypes                                               *
 ******************************************************************************************************/
/*
 * Service Name     : Gpio_ConfigPin
 * Parameters (in)  : - uint8 PortName
 * 					  - uint8 PinNum
 * 					  - uint8 PinMode
 * 					  - uint8 DefaultState
 * 					  - uint8 PUPD
 * Parameters (Out) : void
 * Description      :A function to initialize the GPIO registers with the needed initial values to support the
 * connected hardware actions
 */
void Gpio_ConfigPin(uint8 PortName, uint8 PinNum, uint8 PinMode,uint8 DefaultState,uint8 PUPD);
/*
 * Service Name     : Gpio_WritePin
 * Parameters (in)  : - uint8 PortName
 * 					  - uint8 PinNum
 * 					  - uint8 Data
 * Parameters (Out) : - uint8 OK
 * 					  - uint8 NOK
 * Description      :A function to set a value (1 or 0) to a specific pin.
 */
uint8 Gpio_WritePin(uint8 PortName, uint8 PinNum, uint8 Data);
/*
 * Service Name     : Gpio_ReadPin
 * Parameters (in)  : - uint8 PortName
 * 					  - uint8 PinNum
 * Parameters (Out) : uint8 data
 * Description      :A function to return (1) if a falling edge is detected on the pin and (0) otherwise.
 */
uint8 Gpio_ReadPin(uint8 PortName , uint8 PinNum);


#endif /* GPIO_H */