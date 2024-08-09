#include "kalman.h"

double kalman_filter1( double ADC_Value1 )
{
    double LastData1;
    double NowData1;
    double kalman_adc1;
    static double kalman_adc_old1 = 0;
    static double P11;
    static double Q1 = 0.003;
    static double R1 = 1;
    static double Kg1 = 0;
    static double P1 = 1;
    NowData1 = ADC_Value1;
    LastData1 = kalman_adc_old1;
    P1 = P11 + Q1;
    Kg1 = P1 / ( P1 + R1 );
    kalman_adc1 = LastData1 + Kg1 * ( NowData1 - kalman_adc_old1 );
    P11 = ( 1 - Kg1 ) * P1;
    P1 = P11;
    kalman_adc_old1 = kalman_adc1;
    return ( double )( kalman_adc1 );
}


double kalman_filter2( double ADC_Value2 )
{
    double LastData2;
    double NowData2;
    double kalman_adc2;
    static double kalman_adc_old2 = 2.7;
    static double P12;
    static double Q2 = 0.0001;
    static double R2 = 1;
    static double Kg2 = 0;
    static double P2 = 1;
    NowData2 = ADC_Value2;
    LastData2 = kalman_adc_old2;
    P2 = P12 + Q2;
    Kg2 = P2 / ( P2 + R2 );
    kalman_adc2 = LastData2 + Kg2 * ( NowData2 - kalman_adc_old2 );
    P12 = ( 1 - Kg2 ) * P2;
    P2 = P12;
    kalman_adc_old2 = kalman_adc2;
    return ( double )( kalman_adc2 );
}

