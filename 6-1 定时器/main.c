#include <REGX52.H>
#include <INTRINS.H>
#include "Timer0.h"
#include "Key.h"

unsigned char KeyNum,LEDMode;

void main()
{
	P2 = 0xFE; //restart 0;
	Timer0Init();
  while(1){
		KeyNum = Key();
	  if(KeyNum)
		{
		  if(KeyNum==1)
			{
				LEDMode++;
				if(LEDMode>=2)LEDMode==0;
			}
			
		}
    }
}


void Timer0_Routine() interrupt 1
{

	
	static unsigned int T0Count;
	TL0 = 0x18;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	T0Count++;
	if(T0Count>=2000)
	{
		T0Count = 0;
		if(LEDMode==0)
			 P2=_crol_(P2,1);
	  if(LEDMode==1)
			 P2=_cror_(P2,1);
	}
	
}
