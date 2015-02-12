/**
  ******************************************************************************
  * @file    LCD.h
  * @author  LeftRadio
  * @version V1.0.0
  * @date
  * @brief   LCD suport header file.
  ******************************************************************************
**/

#ifndef __LCD___H
#define __LCD___H

/* Includes ------------------------------------------------------------------*/
#include "NGL.h"
#include "Fonts.h"
#include "Images.h"
#include "Pages.h"
#include "colors 5-6-5.h"

/* Exported typedef ----------------------------------------------------------*/
/* Exported define -----------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/

/* Exported function ---------------------------------------------------------*/
void T11_LCD_Configuration(uint16_t init_color);
void T11_LCD_Set_BackLightPWM(uint8_t BL_Precent);
uint8_t T11_LCD_Get_BackLightPWM(void);



#endif /* __LCD___H */
/*********************************************************************************************************
      END FILE
*********************************************************************************************************/
