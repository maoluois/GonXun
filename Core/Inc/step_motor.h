#include "main.h"

#ifndef STEP_MOTOR_H
#define STEP_MOTOR_H

#define motor3back HAL_GPIO_WritePin(motor3_dir_GPIO_Port,motor3_dir_Pin,SET)
#define motor4back HAL_GPIO_WritePin(motor4_dir_GPIO_Port,motor4_dir_Pin,SET)
#define motor1back HAL_GPIO_WritePin(motor1_dir_GPIO_Port,motor1_dir_Pin,RESET)
#define motor2back HAL_GPIO_WritePin(motor2_dir_GPIO_Port,motor2_dir_Pin,RESET)


#define motor3forward HAL_GPIO_WritePin(motor3_dir_GPIO_Port,motor3_dir_Pin,RESET)
#define motor4forward HAL_GPIO_WritePin(motor4_dir_GPIO_Port,motor4_dir_Pin,RESET)
#define motor1forward HAL_GPIO_WritePin(motor1_dir_GPIO_Port,motor1_dir_Pin,SET)
#define motor2forward HAL_GPIO_WritePin(motor2_dir_GPIO_Port,motor2_dir_Pin,SET)

#define elevaturn_shun HAL_GPIO_WritePin(turn_elevator_dir_GPIO_Port,turn_elevator_dir_Pin,SET)
#define elevaturn_ni HAL_GPIO_WritePin(turn_elevator_dir_GPIO_Port,turn_elevator_dir_Pin,RESET)

#define motor_down HAL_GPIO_WritePin(elevator_dir_GPIO_Port,elevator_dir_Pin,SET)
#define motor_up HAL_GPIO_WritePin(elevator_dir_GPIO_Port,elevator_dir_Pin,RESET)

void goonemetre(unsigned int gom);
void turnleft(unsigned int gom);
void turnright(unsigned int gom);
void gosecondline();
void gofistline();
void elevator_up(unsigned int gom);
void elevator_down(unsigned int gom);
void car_right(unsigned int gom);
void car_left(unsigned int gom);
void gotarget_s(unsigned int gom);
void gotarget_line(unsigned int gom);
void gotarget_s_back(unsigned int gom);
void microturnleft(unsigned int gom);
void microturnright(unsigned int gom);
void microforward(unsigned int gom);
void microback(unsigned int gom);
void microleft(unsigned int gom);
void microright(unsigned int gom);

#endif