/*******************************************************************************
* 函 数 名 : uart_init
* 函数功能 : 串口通信中断配置函数，通过设置 TH 和 TL 即可确定定时时间
* 输 入 : baud：波特率对应的 TH、TL 装载值
* 输 出 : 无
*******************************************************************************/
#include <REGX52.H>
#include "Delay.h"
#include "Uart.h"

unsigned char Sec;


void main()
{
	
	Uart_init();
	
	
	while(1)
	{
		Uart_SendByte(Sec);
		Sec++;
		Delay(1000);
	}
}


