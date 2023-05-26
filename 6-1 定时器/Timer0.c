#include <REGX52.H>

/*
   


*/

void Timer0Init()		//1毫秒@12.000MHz
{
	TMOD |= 0x01;		//定时器时钟1T模式
	TMOD &= 0xF0;		//设置定时器模式
	TL0 = 0x18;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	TF0 = 0;		//清除TF0标志
	TR0 = 1;		//定时器0开始计时
	ET0 = 1;
	EA = 1;
	PT0 = 0;
}

/*
void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x18;		//设置定时初值
	TH0 = 0xFC;		//设置定时初值
	T0Count++;
	if(T0Count>=1000)
	{
		T0Count = 0;
		P2_0 = ~P2_0;
	}
	
}

*/

/*
void Timer0_Init()
{
	//TMOD = 0X01;//0000 0001
	TMOD &= 0xF0; //把TMOD的低四位清零，高四位保持不变
	TMOD |= 0x01; //把TMOD的最低位置1，高四位保持不变
	TF0 = 0;
	TR0 = 1; //64535离计数器溢出还有1000，所有计时时间为1ms
	TH0 = 64535/256; //高八位拿出来了
	TL0 = 64535%256;  //低八位拿出来
	ET0 = 1;
	EA = 1;
	PT0 = 0;
}
*/
