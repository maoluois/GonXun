#include "main.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"
#include "sevor.h"
extern uint16_t X;
extern uint16_t Y;

void pickall() {
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_4, 250);
    servo_open;
    elevator_down(7000);
    servo_close;
    elevator_up(7000);
    ////turnelevator_ni(26000);
    elevator_down(900);
    servo_open;
    delay_ms(100);
    elevator_up(900);
//    //turnelevator_ni(26000);
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_4, 1350);
    elevator_down(7000);
    servo_close;
    elevator_up(7000);
    ////turnelevator_ni(26000);
    elevator_down(900);
    servo_open;
    delay_ms(100);
    elevator_up(900);
//    //turnelevator_ni(26000);
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_4, 2300);
    elevator_down(7000);
    servo_close;
    elevator_up(7000);
    ////turnelevator_ni(26000);
    elevator_down(900);
    servo_open;
    delay_ms(100);
    elevator_up(900);
//    //turnelevator_ni(26000);
}

void layall() {
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_4, 250);
    servo_open;
    ////turnelevator_ni(26000);
    elevator_down(900);
    servo_close;
    delay_ms(100);
    elevator_up(900);
//    //turnelevator_ni(26000);
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_4, 1350);
    servo_open;
    ////turnelevator_ni(26000);
    elevator_down(900);
    servo_close;
    delay_ms(100);
    elevator_up(900);
//    //turnelevator_ni(26000);
    __HAL_TIM_SET_COMPARE(&htim2, TIM_CHANNEL_4, 2300);
    servo_open;
    ////turnelevator_ni(26000);
    elevator_down(900);
    servo_close;
    delay_ms(100);
    elevator_up(900);
//    //turnelevator_ni(26000);
}


void fistpick(){
    elevator_down(3300);

    servo_close;
    delay_ms(200);
    elevator_up(3300);
}

void secondpick(){
    elevator_down(7000);

    servo_close;
    delay_ms(200);
    elevator_up(7000);
}

void microposition(volatile uint16_t *x, volatile uint16_t *y)
{

    int16_t error_k230_x = *x - 196;
    int16_t error_k230_y = *y - 115;
//        while (error_k230_x >= SIGHT_RANGE || error_k230_x <= -SIGHT_RANGE||error_k230_y >= SIGHT_RANGE || error_k230_y <= -SIGHT_RANGE){
//            error_k230_x = X - 222;
//            error_k230_y = Y - 102;
//        }
    while (error_k230_x >= 8 || error_k230_x <= -8 || error_k230_y >= 8 || error_k230_y <= -8) {
        if (error_k230_x < 0) {
            microleft(1);
        }

        if (error_k230_x > 0) {
            microright(1);
        }

        if (error_k230_y > 0) {
            microback(1);
        }

        if (error_k230_y < 0) {
            microforward(1);
        }
        delay_ms(5);
        error_k230_x = *x - 196;
        error_k230_y = *y - 115;
        // printf("%d,%d\r\n",*x,*y);
    }
    // printf("**********************************\n");
}

void microposition0(volatile uint16_t *x, volatile uint16_t *y)
{

    int16_t error_k230_x = *x - 146;
    int16_t error_k230_y = *y - 108;
//        while (error_k230_x >= SIGHT_RANGE || error_k230_x <= -SIGHT_RANGE||error_k230_y >= SIGHT_RANGE || error_k230_y <= -SIGHT_RANGE){
//            error_k230_x = X - 222;
//            error_k230_y = Y - 102;
//        }
    while (error_k230_x >= 15 || error_k230_x <= -15 ||error_k230_y >= 15 || error_k230_y <= -15) {
        if (error_k230_x < 0) {
            microleft(1);
        }

        if (error_k230_x > 0) {
            microright(1);
        }

        if (error_k230_y > 0) {
            microback(1);
        }

        if (error_k230_y < 0) {
            microforward(1);
        }
        delay_ms(5);
        error_k230_x = *x - 146;
        error_k230_y = *y - 108;
        // printf("%d,%d\r\n",*x,*y);
    }
    // printf("**********************************\n");
}


void layin1(){
    position1;
    delay_ms(350);
    elevator_down(4000);
    servo_open;
    elevator_up(4000);
}

void layin2(){
    position2;
    delay_ms(600);
    elevator_down(4000);
    servo_open;
    elevator_up(4000);

}
void layin3(){
    position3;
    delay_ms(900);
    elevator_down(4000);
    servo_open;
    elevator_up(4000);
}

void layout1(){
    position1;
    delay_ms(350);
    servo_open;
    elevator_down(4000);
    servo_close;
    delay_ms(100);
    elevator_up(4000);
    position0;
    delay_ms(370);
    elevator_down(7000);
    servo_open;
    delay_ms(50);
    elevator_up(7000);
}

void layout2(){
    position2;
    delay_ms(600);
    servo_open;
    elevator_down(4000);
    servo_close;
    delay_ms(100);
    elevator_up(4000);
    position0;
    delay_ms(370);
    elevator_down(7000);
    servo_open;
    delay_ms(50);
    elevator_up(7000);
}

void layout3(){
    position3;
    delay_ms(1200);
    servo_open;
    elevator_down(4000);
    servo_close;
    delay_ms(100);
    elevator_up(4000);
    position0;
    delay_ms(370);
    elevator_down(7000);
    servo_open;
    delay_ms(50);
    elevator_up(7000);
}



void layout1_2(){
    position1;
    delay_ms(350);
    servo_open;
    elevator_down(4000);
    servo_close;
    delay_ms(100);
    elevator_up(4000);
    position0;
    delay_ms(370);
    elevator_down(4500);
    servo_open;
    delay_ms(50);
    elevator_up(4500);
}

void layout2_2(){
    position2;
    delay_ms(600);
    servo_open;
    elevator_down(4500);
    servo_close;
    delay_ms(100);
    elevator_up(4500);
    position0;
    delay_ms(370);
    elevator_down(4500);
    servo_open;
    delay_ms(50);
    elevator_up(4500);
}

void layout3_2(){
    position3;
    delay_ms(1500);
    servo_open;
    elevator_down(4500);
    servo_close;
    delay_ms(100);
    elevator_up(4500);
    position0;
    delay_ms(370);
    elevator_down(4500);
    servo_open;
    delay_ms(50);
    elevator_up(4500);
}






void layout1_temp(){
    position1;
    delay_ms(350);
    servo_open;
    delay_ms(500);
    servo_close;
    position0;
    delay_ms(500);
    servo_open;
    delay_ms(50);

}
void layout2_temp(){
    position2;
    delay_ms(600);
    servo_open;
    delay_ms(500);
    servo_close;
    position0;
    delay_ms(500);
    servo_open;
    delay_ms(50);

}
void layout3_temp(){
    position3;
    delay_ms(1000);
    servo_open;
    delay_ms(500);
    servo_close;
    position0;
    delay_ms(500);
    servo_open;
    delay_ms(50);

}
