/**
  ****************************************************************************** 
  * @file    MenuPage 4_Labels.h
  * @author  LeftRadio
  * @version V1.0.0
  * @date    11.12.2014 0:44:20
  * @brief   NGL Page MenuPage 4 Labels structs
  ****************************************************************************** 
**/

#ifndef __MENUPAGE 4_LABELS_H
#define __MENUPAGE 4_LABELS_H

/* Includes ------------------------------------------------------------------*/
#include "NGL.h"

/* Exported typedef -----------------------------------------------------------*/
/* Exported define ------------------------------------------------------------*/
/* Exported macro -------------------------------------------------------------*/
/* Exported function prototypes -----------------------------------------------*/

/* Exported variables ---------------------------------------------------------*/
char Label1_text[11] = "+0123456789" 

/* MenuPage 4 Label1 item */
NGL_Label Label1 = {
	110,
	110,
	0x0,
	DISABLE,
	Label1_text,
	&Square721_BT_8,
};






#endif /* __MENUPAGE 4_LABELS_H */
/*********************************************************************************************************
 END FILE
*********************************************************************************************************/;

