/**
  ******************************************************************************
  * @file    app_lowpower.c
  * @author  MCD Application Team
  * @brief   Low power application interface
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2018 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */

#undef GLOBAL
#ifdef __APP_LOWPOWER_C
#define GLOBAL
#else
#define GLOBAL extern
#endif

/* Includes ------------------------------------------------------------------*/
#include "k_module.h"

/* external defines ----------------------------------------------------------*/
#define STANDBY                             0x01u
#define STOP                                0x02u

/* External variables --------------------------------------------------------*/
GLOBAL const K_ModuleItem_Typedef ModuleLowPower;

/* Private function prototypes -----------------------------------------------*/
/* Private typedef -----------------------------------------------------------*/
/* Private macros ------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private functions ---------------------------------------------------------*/
void LowPowerExitDisplay(uint32_t Mode);

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
