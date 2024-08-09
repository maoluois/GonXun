#include "main.h"

#ifndef _SPI_H_
#define _SPI_H_

#define u8 uint8_t


//±¾²âÊÔ³ÌÐòÊ¹ÓÃµÄÊÇÄ£ÄâSPI½Ó¿ÚÇý¶¯
//¿É×ÔÓÉ¸ü¸Ä½Ó¿ÚIOÅäÖÃ£¬Ê¹ÓÃÈÎÒâ×îÉÙ4 IO¼´¿ÉÍê³É±¾¿îÒº¾§Çý¶¯ÏÔÊ¾
/******************************************************************************
½Ó¿Ú¶¨ÒåÔÚlcd.hÄÚ¶¨Òå£¬Çë¸ù¾Ý½ÓÏßÐÞ¸Ä²¢ÐÞ¸ÄÏàÓ¦IO³õÊ¼»¯LCD_GPIO_Init()
#define LCD_CTRL   	  	GPIOB		//¶¨ÒåTFTÊý¾Ý¶Ë¿Ú
#define LCD_LED        	GPIO_Pin_9  //PB9 Á¬½ÓÖÁTFT -LED
#define LCD_RS         	GPIO_Pin_10	//PB10Á¬½ÓÖÁTFT --RS
#define LCD_CS        	GPIO_Pin_11 //PB11 Á¬½ÓÖÁTFT --CS
#define LCD_RST     	GPIO_Pin_12	//PB12Á¬½ÓÖÁTFT --RST
#define LCD_SCL        	GPIO_Pin_13	//PB13Á¬½ÓÖÁTFT -- CLK
#define LCD_SDA        	GPIO_Pin_15	//PB15Á¬½ÓÖÁTFT - SDI
*******************************************************************************/


//Òº¾§¿ØÖÆ¿ÚÖÃ1²Ù×÷Óï¾äºê¶¨Òå

#define	SPI_MOSI_SET  	 SDA_GPIO_Port->BSRR= SDA_Pin
#define	SPI_SCLK_SET  	 SCL_GPIO_Port->BSRR= SCL_Pin


//Òº¾§¿ØÖÆ¿ÚÖÃ0²Ù×÷Óï¾äºê¶¨Òå

#define	SPI_MOSI_CLR  	SDA_GPIO_Port->BSRR=(uint32_t)SDA_Pin << 16U
#define	SPI_SCLK_CLR  	SCL_GPIO_Port->BSRR=(uint32_t)SCL_Pin << 16U

void  SPIv_WriteData(u8 Data);

#endif
