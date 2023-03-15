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

//1.3�� 240x240 ������  LCD��ʾʵ��-�⺯���汾

//�Ա����̣�mcudev.taobao.com
//�Ա����̣�shop389957290.taobao.com	
/************************************************/ 


 int main(void)
 {	 

	delay_init();	    	    	//��ʱ������ʼ��	  
	NVIC_Configuration(); 	 	//����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(115200);	     	//���ڳ�ʼ��Ϊ115200
 	LED_Init();			         	//LED�˿ڳ�ʼ��
	
	LCD_Init();           		//��ʼ��LCD SPI �ӿ�
	
	//GBK_Lib_Init();       	//Ӳ��GBK�ֿ��ʼ��--(���ʹ�ò����ֿ��Һ�����汾���˴��������Σ������ֿ��ʼ����
	
	POINT_COLOR=RED;      		//������ɫ����ɫ
	
  while(1) 
	{		 
		Demo_Menu();
		delay_ms(1000);	
		LCD_Clear(GRAY0);
		delay_ms(1000);	
	} 
}
