#include <REGX52.H>
#include "Delay.h"
#include "LCD1602.h"

void main()
{
	LCD_Init();
	LCD_ShowChar(1,1,'C');
	LCD_ShowString(1,4,"Hello");
  while(1)
	{
	  
	}
}
