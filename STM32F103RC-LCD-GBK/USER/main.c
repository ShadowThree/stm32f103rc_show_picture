#include "sys.h"
#include "led.h"
#include "delay.h"
#include "key.h"

#include "usart.h"

#include "lcd.h"
#include "Dis_Picture.h" 
#include "Text.h"	
#include "GBK_LibDrive.h"	

/************************************************/

//1.3寸 240x240 高清屏  LCD显示实验-库函数版本

//淘宝店铺：mcudev.taobao.com
//淘宝店铺：shop389957290.taobao.com	
/************************************************/ 


 int main(void)
 {	 

	delay_init();	    	    	//延时函数初始化	  
	NVIC_Configuration(); 	 	//设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(115200);	     	//串口初始化为115200
 	LED_Init();			         	//LED端口初始化
	
	LCD_Init();           		//初始化LCD SPI 接口
	
	//GBK_Lib_Init();       	//硬件GBK字库初始化--(如果使用不带字库的液晶屏版本，此处可以屏蔽，不做字库初始化）
	
	POINT_COLOR=RED;      		//画笔颜色：红色
	
  while(1) 
	{		 
		Demo_Menu();
		delay_ms(1000);	
		LCD_Clear(GRAY0);
		delay_ms(1000);	
	} 
}
