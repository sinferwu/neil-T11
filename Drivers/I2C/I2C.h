/**
  ******************************************************************************
  * @file	 	I2C.h
  * @author  	Neil Lab :: Left Radio
  * @version 	v1.0.0
  * @date
  * @brief		header for I2C driver
  ******************************************************************************
**/

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _I2C__H
#define _I2C__H

/* Includes ------------------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
/* Exported macro ------------------------------------------------------------*/
/* Exported typedef ----------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
/* Exported function ---------------------------------------------------------*/
void I2C_Configuration(uint32_t speed);
void I2C_DeConfiguration(void);
int I2C_Write(I2C_TypeDef* I2C, uint8_t I2C_Addr, uint8_t RegisterAddr, uint8_t RegisterValue);


#endif /* _I2C__H */
/*********************************************************************************************************
      END FILE
*********************************************************************************************************/
