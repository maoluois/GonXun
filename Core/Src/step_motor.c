#include "main.h"
#include "step_motor.h"
#include "delay.h"
unsigned int acce_time[400]={4000,4000,3983,3983,3965,3965,3948,3948,3930,3930,3913,3913,3895,3895,3878,3878,3860,3860,3843,3843,3825,3825,3808,3808,3790,3790,3773,3773,3755,3755,3738,3738,3720,3720,3703,3703,3685,3685,3668,3668,3650,3650,3633,3633,3615,3615,3598,3598,3580,3580,3563,3563,3545,3545,3528,3528,3510,3510,3493,3493,3475,3475,3458,3458,3440,3440,3423,3423,3405,3405,3388,3388,3370,3370,3353,3353,3335,3335,3318,3318,3300,3300,3283,3283,3265,3265,3248,3248,3230,3230,3213,3213,3195,3195,3178,3178,3160,3160,3143,3143,3125,3125,3108,3108,3090,3090,3073,3073,3055,3055,3038,3038,3020,3020,3003,3003,2985,2985,2968,2968,2950,2950,2933,2933,2915,2915,2898,2898,2880,2880,2863,2863,2845,2845,2828,2828,2810,2810,2793,2793,2775,2775,2758,2758,2740,2740,2723,2723,2705,2705,2688,2688,2670,2670,2653,2653,2635,2635,2618,2618,2600,2600,2583,2583,2565,2565,2548,2548,2530,2530,2513,2513,2495,2495,2478,2478,2460,2460,2443,2443,2425,2425,2408,2408,2390,2390,2373,2373,2355,2355,2338,2338,2320,2320,2303,2303,2285,2285,2268,2268,2250,2250,2233,2233,2215,2215,2198,2198,2180,2180,2163,2163,2145,2145,2128,2128,2110,2110,2093,2093,2075,2075,2058,2058,2040,2040,2023,2023,2005,2005,1988,1988,1970,1970,1953,1953,1935,1935,1918,1918,1900,1900,1883,1883,1865,1865,1848,1848,1830,1830,1813,1813,1795,1795,1778,1778,1760,1760,1743,1743,1725,1725,1708,1708,1690,1690,1673,1673,1655,1655,1638,1638,1620,1620,1603,1603,1585,1585,1568,1568,1550,1550,1533,1533,1515,1515,1498,1498,1480,1480,1463,1463,1445,1445,1428,1428,1410,1410,1393,1393,1375,1375,1358,1358,1340,1340,1323,1323,1305,1305,1288,1288,1270,1270,1253,1253,1235,1235,1218,1218,1200,1200,1183,1183,1165,1165,1148,1148,1130,1130,1113,1113,1095,1095,1078,1078,1060,1060,1043,1043,1025,1025,1008,1008,990,990,973,973,955,955,938,938,920,920,903,903,885,885,868,868,850,850,833,833,815,815,798,798,780,780,763,763,745,745,728,728,710,710,693,693,675,675,658,658,640,640,623,623,605,605,588,588,570,570,553,553,535,535,518,518};
unsigned int acce_elevator[400]={999,999,999,998,998,998,998,998,998,998,998,998,998,998,998,998,998,998,998,998,998,998,998,997,997,997,997,997,997,997,997,997,997,997,997,996,996,996,996,996,996,996,996,995,995,995,995,995,995,994,994,994,994,994,994,993,993,993,993,992,992,992,992,991,991,991,990,990,990,989,989,989,988,988,988,987,987,986,986,985,985,984,984,983,983,982,981,981,980,979,979,978,977,976,976,975,974,973,972,971,970,969,968,967,966,965,964,962,961,960,958,957,956,954,953,951,949,948,946,944,942,940,938,936,934,932,930,927,925,923,920,918,915,912,909,906,903,900,897,894,891,887,884,880,876,872,868,864,860,856,852,847,843,838,833,828,823,818,813,807,802,796,791,785,779,773,766,760,754,747,741,734,727,720,713,706,698,691,683,676,668,660,652,644,636,628,620,612,603,595,587,578,569,561,552,544,535,526,517,509,500,491,483,474,465,456,448,439,431,422,413,405,397,388,380,372,364,356,348,340,332,324,317,309,302,294,287,280,273,266,259,253,246,240,234,227,221,215,209,204,198,193,187,182,177,172,167,162,157,153,148,144,140,136,132,128,124,120,116,113,109,106,103,100,97,94,91,88,85,82,80,77,75,73,70,68,66,64,62,60,58,56,54,52,51,49,47,46,44,43,42,40,39,38,36,35,34,33,32,31,30,29,28,27,26,25,24,24,23,22,21,21,20,19,19,18,17,17,16,16,15,15,14,14,13,13,12,12,12,11,11,11,10,10,10,9,9,9,8,8,8,8,7,7,7,7,6,6,6,6,6,6,5,5,5,5,5,5,4,4,4,4,4,4,4,4,3,3,3,3,3,3,3,3,3,3,3,3,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,1,1};
unsigned int acce_line[400]={3996,3996,3996,3996,3996,3996,3995,3995,3995,3995,3995,3995,3994,3994,3994,3994,3993,3993,3993,3993,3993,3993,3992,3992,3991,3991,3991,3991,3990,3990,3990,3990,3989,3989,3988,3988,3987,3987,3986,3986,3985,3985,3984,3984,3983,3983,3982,3982,3981,3981,3980,3980,3978,3978,3977,3977,3975,3975,3973,3973,3971,3971,3969,3969,3967,3967,3965,3965,3962,3962,3960,3960,3957,3957,3954,3954,3951,3951,3947,3947,3943,3943,3939,3939,3935,3935,3930,3930,3926,3926,3920,3920,3915,3915,3909,3909,3902,3902,3895,3895,3888,3888,3880,3880,3872,3872,3863,3863,3854,3854,3843,3843,3833,3833,3821,3821,3809,3809,3796,3796,3782,3782,3767,3767,3751,3751,3734,3734,3717,3717,3698,3698,3678,3678,3656,3656,3634,3634,3610,3610,3585,3585,3558,3558,3530,3530,3501,3501,3470,3470,3437,3437,3403,3403,3366,3366,3329,3329,3289,3289,3248,3248,3205,3205,3160,3160,3113,3113,3065,3065,3014,3014,2963,2963,2909,2909,2854,2854,2797,2797,2739,2739,2679,2679,2618,2618,2556,2556,2493,2493,2429,2429,2364,2364,2298,2298,2232,2232,2166,2166,2100,2100,2033,2033,1967,1967,1901,1901,1835,1835,1770,1770,1706,1706,1643,1643,1581,1581,1520,1520,1460,1460,1402,1402,1345,1345,1290,1290,1236,1236,1185,1185,1134,1134,1086,1086,1039,1039,994,994,951,951,910,910,870,870,833,833,796,796,762,762,729,729,698,698,669,669,641,641,614,614,589,589,565,565,543,543,521,521,501,501,482,482,465,465,448,448,432,432,417,417,403,403,390,390,378,378,366,366,356,356,345,345,336,336,327,327,319,319,311,311,304,304,297,297,290,290,284,284,279,279,273,273,269,269,264,264,260,260,256,256,252,252,248,248,245,245,242,242,239,239,237,237,234,234,232,232,230,230,228,228,226,226,224,224,222,222,221,221,219,219,218,218,217,217,216,216,215,215,214,214,213,213,212,212,211,211,210,210,209,209,209,209,208,208,208,208,207,207,206,206,206,206,206,206,205,205,205,205,204,204,204,204,204,204,203,203,203,203};

unsigned int temp1,temp2;

uint32_t accelerate_smoothness = 400;

void car_forward()
{
    motor3forward;
    motor4forward;
    motor1forward;
    motor2forward;

}

void car_right(unsigned int gom){
    motor1forward;
    motor4forward;
    motor2back;
    motor3back;

    for(temp1=0 ;temp1<gom;temp1++){
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(1000);

    }


}
void car_left(unsigned int gom){
    motor1back;
    motor4back;
    motor2forward;
    motor3forward;

    for(temp1=0 ;temp1<gom;temp1++){
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(1500);

    }


}
void goonemetre(unsigned int gom)
{

    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[temp1]);
    }
    for(int i =0 ;i<(gom-2*accelerate_smoothness-50);i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1]);
    }
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1-temp1]);
    }
    for(int i =0 ;i<50;i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[0]);
    }
}

void microturnright(unsigned int gom)
{
    motor1forward;
    motor2forward;
    motor3back;
    motor4back;

    for(temp1=0 ;temp1<gom;temp1++){
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(24000);


    }
}

void microturnleft(unsigned int gom)
{
    motor1back;
    motor2back;
    motor3forward;
    motor4forward;

    for(temp1=0 ;temp1<gom;temp1++){
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(2000);

    }
}

void microforward(unsigned int gom)
{
    motor1forward;
    motor2forward;
    motor3forward;
    motor4forward;

    for(temp1=0 ;temp1<gom;temp1++){
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(2000);

    }
}

void microback(unsigned int gom)
{
    motor1back;
    motor2back;
    motor3back;
    motor4back;

    for(temp1=0 ;temp1<gom;temp1++){
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(2000);

    }
}

void microleft(unsigned int gom)
{
    motor1back;
    motor4back;
    motor2forward;
    motor3forward;

    for(temp1=0 ;temp1<gom;temp1++){
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(2000);

    }
}

void microright(unsigned int gom)
{
    motor1forward;
    motor4forward;
    motor2back;
    motor3back;

    for(temp1=0 ;temp1<gom;temp1++){
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(2000);

    }
}

void turnleft(unsigned int gom)
{
    motor1back;
    motor2back;
    motor3forward;
    motor4forward;
//10058
//11459
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[temp1]);
    }
    for(int i =0 ;i<(gom-2*accelerate_smoothness);i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1]);
    }
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1-temp1]);
    }

}
//11459   9235

void turnright(unsigned int gom)
{
    motor1forward;
    motor2forward;
    motor3back;
    motor4back;

    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[temp1]);
    }
    for(int i =0 ;i<(gom-2*accelerate_smoothness);i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1]);
    }
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1-temp1]);
    }
}

void gofistline()
{
    motor1forward;
    motor2forward;
    motor3forward;
    motor4forward;
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[temp1]);
    }
    for(int i =0 ;i<10500;i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1]);
    }
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1-temp1]);
    }
    for(int i =0 ;i<159;i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[0]);
    }
}
void gotarget_s(unsigned int gom)
{
    motor1forward;
    motor2forward;
    motor3forward;
    motor4forward;
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[temp1]);
    }
    for(int i =0 ;i<(gom-2*accelerate_smoothness-100);i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1]);
    }
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1-temp1]);
    }
    for(int i =0 ;i<100;i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[0]);
    }
}

void gotarget_s_back(unsigned int gom)
{
    motor1back;
    motor2back;
    motor3back;
    motor4back;
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[temp1]);
    }
    for(int i =0 ;i<(gom-2*accelerate_smoothness-100);i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1]);
    }
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1-temp1]);
    }
    for(int i =0 ;i<100;i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[0]);
    }
}

void gotarget_line(unsigned int gom)
{
    motor1forward;
    motor2forward;
    motor3forward;
    motor4forward;
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[temp1]);
    }
    for(int i =0 ;i<(gom-2*accelerate_smoothness-100);i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1]);
    }
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1-temp1]);
    }
    for(int i =0 ;i<100;i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[0]);
    }
}
//10058
void gosecondline()
{
motor1forward;
motor2forward;
motor3forward;
motor4forward;
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[temp1]);
    }
    for(int i =0 ;i<9100;i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1]);
    }
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[accelerate_smoothness-1-temp1]);
    }
    for(int i =0 ;i<158;i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, SET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, SET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, SET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(motor1_GPIO_Port, motor1_Pin, RESET);
        HAL_GPIO_WritePin(motor2_GPIO_Port, motor2_Pin, RESET);
        HAL_GPIO_WritePin(motor3_GPIO_Port, motor3_Pin, RESET);
        HAL_GPIO_WritePin(motor4_GPIO_Port, motor4_Pin, RESET);
        delay_us(acce_time[0]);
    }
}

void elevator_up(unsigned int gom){

    motor_up;
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, SET);

        delay_us(150);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, RESET);
        delay_us(acce_elevator[temp1]);
    }
    for(int i =0 ;i<(gom-2*accelerate_smoothness-20);i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, RESET);
        delay_us(acce_elevator[accelerate_smoothness-1]);
    }
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, RESET);
        delay_us(acce_elevator[accelerate_smoothness-1-temp1]);
    }
//    for(int i =0 ;i<20;i++) {
//        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
//        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, SET);
//        delay_us(150);
//        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, RESET);
//        delay_us(acce_elevator[0]);
//    }

}
void elevator_down(unsigned int gom){

    motor_down;
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, SET);

        delay_us(150);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, RESET);
        delay_us(acce_elevator[temp1]);
    }
    for(int i =0 ;i<(gom-2*accelerate_smoothness-20);i++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, RESET);
        delay_us(acce_elevator[accelerate_smoothness-1]);
    }
    for(temp1=0 ;temp1<accelerate_smoothness;temp1++) {
        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, SET);
        delay_us(150);
        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, RESET);
        delay_us(acce_elevator[accelerate_smoothness-1-temp1]);
    }
//    for(int i =0 ;i<20;i++) {
//        HAL_GPIO_TogglePin(LED_GPIO_Port, LED_Pin);
//        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, SET);
//        delay_us(150);
//        HAL_GPIO_WritePin(elevator_GPIO_Port, elevator_Pin, RESET);
//        delay_us(acce_elevator[0]);
//    }
}


