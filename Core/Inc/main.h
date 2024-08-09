/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32h7xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include "lcd.h"
#include "gui.h"
#include "ruanjianspi.h"
#include "delay.h"
#include "step_motor.h"
#include "sevor.h"
#include "retarget.h"
#include "stdlib.h"

#include "stdio.h"
#include "string.h"
#include "kalman.h"
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define motor4_dir_Pin GPIO_PIN_3
#define motor4_dir_GPIO_Port GPIOE
#define motor3_dir_Pin GPIO_PIN_4
#define motor3_dir_GPIO_Port GPIOE
#define LED_Pin GPIO_PIN_13
#define LED_GPIO_Port GPIOC
#define turntable_Pin GPIO_PIN_1
#define turntable_GPIO_Port GPIOA
#define servo1_Pin GPIO_PIN_2
#define servo1_GPIO_Port GPIOA
#define servo2_Pin GPIO_PIN_3
#define servo2_GPIO_Port GPIOA
#define motor_en_Pin GPIO_PIN_5
#define motor_en_GPIO_Port GPIOA
#define motor1_Pin GPIO_PIN_6
#define motor1_GPIO_Port GPIOA
#define motor2_Pin GPIO_PIN_7
#define motor2_GPIO_Port GPIOA
#define motor1_dir_Pin GPIO_PIN_4
#define motor1_dir_GPIO_Port GPIOC
#define motor2_dir_Pin GPIO_PIN_5
#define motor2_dir_GPIO_Port GPIOC
#define IMU_RX_Pin GPIO_PIN_12
#define IMU_RX_GPIO_Port GPIOB
#define IMU_TX_Pin GPIO_PIN_13
#define IMU_TX_GPIO_Port GPIOB
#define elevator_dir_Pin GPIO_PIN_10
#define elevator_dir_GPIO_Port GPIOD
#define motor4_Pin GPIO_PIN_12
#define motor4_GPIO_Port GPIOD
#define motor3_Pin GPIO_PIN_7
#define motor3_GPIO_Port GPIOC
#define elevator_Pin GPIO_PIN_8
#define elevator_GPIO_Port GPIOC
#define OPENMV_TX_Pin GPIO_PIN_9
#define OPENMV_TX_GPIO_Port GPIOA
#define OPENMV_RX_Pin GPIO_PIN_10
#define OPENMV_RX_GPIO_Port GPIOA
#define PC_RX_Pin GPIO_PIN_11
#define PC_RX_GPIO_Port GPIOA
#define PC_TX_Pin GPIO_PIN_12
#define PC_TX_GPIO_Port GPIOA
#define MS1_Pin GPIO_PIN_0
#define MS1_GPIO_Port GPIOD
#define MS2_Pin GPIO_PIN_1
#define MS2_GPIO_Port GPIOD
#define BL_Pin GPIO_PIN_7
#define BL_GPIO_Port GPIOD
#define CS_Pin GPIO_PIN_3
#define CS_GPIO_Port GPIOB
#define DC_Pin GPIO_PIN_4
#define DC_GPIO_Port GPIOB
#define RES_Pin GPIO_PIN_5
#define RES_GPIO_Port GPIOB
#define SCL_Pin GPIO_PIN_6
#define SCL_GPIO_Port GPIOB
#define SDA_Pin GPIO_PIN_7
#define SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

#define Pi 3.1415916f

#define BUFFER_SIZE 6  // 缓冲区大�?
#define SIGHT_RANGE 30
#define position0 __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_4, 2370)
#define position1 __HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_4, 1360)
#define position2 __HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_4, 1030)
#define position3 __HAL_TIM_SET_COMPARE(&htim2,TIM_CHANNEL_4, 680)
//FDILINKÉÏÎ»»úÍ¨Ñ¶ÐÄÌø°ü³¤¶È
#define RESERVE_LEN 25

//²»Í¬Êý¾Ý°ü³¤¶È
#define MSG_SYS_STATE_LEN 	102
#define MSG_EULER_ORIEN_LEN 20

//È·¶¨×î¶Ì³¤¶È
#define DATA_LEN(required_len) (required_len > RESERVE_LEN)? required_len:RESERVE_LEN


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
