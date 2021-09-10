/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LARGE_RES_Pin GPIO_PIN_0
#define LARGE_RES_GPIO_Port GPIOA
#define BIG_RES_Pin GPIO_PIN_1
#define BIG_RES_GPIO_Port GPIOA
#define SMALL_RES_Pin GPIO_PIN_2
#define SMALL_RES_GPIO_Port GPIOA
#define TINY_RES_Pin GPIO_PIN_3
#define TINY_RES_GPIO_Port GPIOA
#define SCL_Pin GPIO_PIN_5
#define SCL_GPIO_Port GPIOA
#define SDO_Pin GPIO_PIN_6
#define SDO_GPIO_Port GPIOA
#define SDI_Pin GPIO_PIN_7
#define SDI_GPIO_Port GPIOA
#define LCD_Reset_Pin GPIO_PIN_0
#define LCD_Reset_GPIO_Port GPIOB
#define LCD_CS_Pin GPIO_PIN_1
#define LCD_CS_GPIO_Port GPIOB
#define DC_Pin GPIO_PIN_2
#define DC_GPIO_Port GPIOB
#define RTP_CS_Pin GPIO_PIN_10
#define RTP_CS_GPIO_Port GPIOB
#define LCD_Backlight_Pin GPIO_PIN_14
#define LCD_Backlight_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
