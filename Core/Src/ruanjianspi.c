#include "ruanjianspi.h"

/*****************************************************************************
 * @name       :void  SPIv_WriteData(u8 Data)
 * @date       :2018-08-09
 * @function   :Write a byte of data using STM32's Software SPI
 * @parameters :Data:Data to be written
 * @retvalue   :None
******************************************************************************/
void  SPIv_WriteData(u8 Data)
{
    unsigned char i=0;
    for(i=8;i>0;i--)
    {
        if(Data&0x80)
            SPI_MOSI_SET; //Êä³öÊý¾Ý
        else SPI_MOSI_CLR;

        SPI_SCLK_CLR;
        SPI_SCLK_SET;
        Data<<=1;
    }
}

