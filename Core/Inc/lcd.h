#ifndef __LCD_H
#define __LCD_H
#include "main.h"
#include "stdlib.h"

#define u8 uint8_t
#define u16 uint16_t


//LCDÖØÒª²ÎÊý¼¯
typedef struct
{
    u16 width;			//LCD ¿í¶È
    u16 height;			//LCD ¸ß¶È
    u16 id;				  //LCD ID
    u8  dir;			  //ºáÆÁ»¹ÊÇÊúÆÁ¿ØÖÆ£º0£¬ÊúÆÁ£»1£¬ºáÆÁ¡£
    u16	 wramcmd;		//¿ªÊ¼Ð´gramÖ¸Áî
    u16  setxcmd;		//ÉèÖÃx×ø±êÖ¸Áî
    u16  setycmd;		//ÉèÖÃy×ø±êÖ¸Áî
}_lcd_dev;

//LCD²ÎÊý
extern _lcd_dev lcddev;	//¹ÜÀíLCDÖØÒª²ÎÊý
/////////////////////////////////////ÓÃ»§ÅäÖÃÇø///////////////////////////////////
#define USE_HORIZONTAL  	 1 //¶¨ÒåÒº¾§ÆÁË³Ê±ÕëÐý×ª·½Ïò 	0-0¶ÈÐý×ª£¬1-90¶ÈÐý×ª£¬2-180¶ÈÐý×ª£¬3-270¶ÈÐý×ª

//////////////////////////////////////////////////////////////////////////////////
//¶¨ÒåLCDµÄ³ß´ç
#define LCD_W 128
#define LCD_H 160

//TFTLCD²¿·ÖÍâÒªµ÷ÓÃµÄº¯Êý
extern u16  POINT_COLOR;//Ä¬ÈÏºìÉ«
extern u16  BACK_COLOR; //±³¾°ÑÕÉ«.Ä¬ÈÏÎª°×É«


//QDtechÈ«ÏµÁÐÄ£¿é²ÉÓÃÁËÈý¼«¹Ü¿ØÖÆ±³¹âÁÁÃð£¬ÓÃ»§Ò²¿ÉÒÔ½ÓPWMµ÷½Ú±³¹âÁÁ¶È

#define	LCD_LED 	BL_GPIO_Port->BSRR= BL_Pin            //LCD±³¹â

//Èç¹ûÊ¹ÓÃ¹Ù·½¿âº¯Êý¶¨ÒåÏÂÁÐµ×²ã£¬ËÙ¶È½«»áÏÂ½µµ½14Ö¡Ã¿Ãë£¬½¨Òé²ÉÓÃÎÒË¾ÍÆ¼ö·½·¨

//GPIOÖÃÎ»£¨À­¸ß£©
#define	LCD_CS_SET  CS_GPIO_Port->BSRR= CS_Pin  //Æ¬Ñ¡¶Ë¿Ú
#define	LCD_RS_SET	DC_GPIO_Port->BSRR=DC_Pin     //Êý¾Ý/ÃüÁî
#define	LCD_RST_SET	RES_GPIO_Port->BSRR=RES_Pin   //¸´Î»

//GPIO¸´Î»£¨À­µÍ£©
#define	LCD_CS_CLR  CS_GPIO_Port->BSRR=(uint32_t)CS_Pin << 16U   //Æ¬Ñ¡¶Ë¿Ú
#define	LCD_RS_CLR	DC_GPIO_Port->BSRR=(uint32_t)DC_Pin << 16U    //Êý¾Ý/ÃüÁî
#define	LCD_RST_CLR	RES_GPIO_Port->BSRR=(uint32_t)RES_Pin << 16U  //¸´Î»

//»­±ÊÑÕÉ«
#define WHITE       0xFFFF
#define BLACK      	0x0000
#define BLUE       	0x001F
#define BRED        0XF81F
#define GRED 			 	0XFFE0
#define GBLUE			 	0X07FF
#define RED         0xF800
#define MAGENTA     0xF81F
#define GREEN       0x07E0
#define CYAN        0x7FFF
#define YELLOW      0xFFE0
#define BROWN 			0XBC40 //×ØÉ«
#define BRRED 			0XFC07 //×ØºìÉ«
#define GRAY  			0X8430 //»ÒÉ«
//GUIÑÕÉ«

#define DARKBLUE      	 0X01CF	//ÉîÀ¶É«
#define LIGHTBLUE      	 0X7D7C	//Ç³À¶É«
#define GRAYBLUE       	 0X5458 //»ÒÀ¶É«
//ÒÔÉÏÈýÉ«ÎªPANELµÄÑÕÉ«

#define LIGHTGREEN     	0X841F //Ç³ÂÌÉ«
#define LIGHTGRAY     0XEF5B //Ç³»ÒÉ«(PANNEL)
#define LGRAY 			 		0XC618 //Ç³»ÒÉ«(PANNEL),´°Ìå±³¾°É«

#define LGRAYBLUE      	0XA651 //Ç³»ÒÀ¶É«(ÖÐ¼ä²ãÑÕÉ«)
#define LBBLUE          0X2B12 //Ç³×ØÀ¶É«(Ñ¡ÔñÌõÄ¿µÄ·´É«)

void LCD_Init(void);
void LCD_DisplayOn(void);
void LCD_DisplayOff(void);
void LCD_Clear(u16 Color);	//»»É«
void LCD_SetCursor(u16 Xpos, u16 Ypos);//¹â±ê
void LCD_DrawPoint(u16 x,u16 y);//»­µã

void LCD_DrawLine(u16 x1, u16 y1, u16 x2, u16 y2);//»­Ïß
void LCD_DrawRectangle(u16 x1, u16 y1, u16 x2, u16 y2);		 //»­³¤·½ÐÎ
void LCD_SetWindows(u16 xStar, u16 yStar,u16 xEnd,u16 yEnd);


void LCD_WriteReg(u8 LCD_Reg, u16 LCD_RegValue);
void LCD_WR_DATA(u8 data);

void LCD_WriteRAM_Prepare(void);
void LCD_WriteRAM(u16 RGB_Code);


void LCD_SetParam(void);
void Lcd_WriteData_16Bit(u16 Data);
void LCD_direction(u8 direction );


#endif

