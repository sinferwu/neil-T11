/**
  ******************************************************************************
  * @file	 	platform.c
  * @author  	Neil Lab :: Left Radio
  * @version 	v1.0.0
  * @date
  * @brief		sourse
  ******************************************************************************
**/

/* Includes ------------------------------------------------------------------*/
#include "platform.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
const uint16_t LEDs_Pin[2] = { GPIO_Pin_7 , GPIO_Pin_8 };
__IO uint8_t LEDs_State[2] = {0, 0};

/* Extern function -----------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/*******************************************************************************
* Function Name  : T11_LED_Toggle
* Description    :
* Input          : 0/1 - LED num
* Return         : None
*******************************************************************************/
void T11_LED_Toggle(uint8_t LED)
{
	LEDs_State[LED] ^= 0x01;
	GPIO_WriteBit(T11_LEDs_PORT, LEDs_Pin[LED], LEDs_State[LED]);
}


/*******************************************************************************
* Function Name  : T11_LED_ON
* Description    :
* Input          : 0/1 - LED num
* Return         : None
*******************************************************************************/
void T11_LED_ON(uint8_t LED)
{
	LEDs_State[LED] = 0x01;
	GPIO_WriteBit(T11_LEDs_PORT, LEDs_Pin[LED], LEDs_State[LED]);
}


/*******************************************************************************
* Function Name  : T11_LED_OFF
* Description    :
* Input          : 0/1 - LED num
* Return         : None
*******************************************************************************/
void T11_LED_OFF(uint8_t LED)
{
	LEDs_State[LED] = 0x00;
	GPIO_WriteBit(T11_LEDs_PORT, LEDs_Pin[LED], LEDs_State[LED]);
}



/*******************************************************************************
* Function Name  : T11_LED_Read
* Description    :
* Input          : 0/1 - LED num
* Return         : None
*******************************************************************************/
uint8_t T11_LED_Read(uint8_t LED)
{
	return LEDs_State[LED];
}


/*********************************************************************************************************
      END FILE
*********************************************************************************************************/
