#include <REGX52.H>
#include <INTRINS.H>


/*要让这个程序实现D8闪烁*/

void Delay500ms()		//@12.000MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 205;
	k = 187;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}


void main()
{
	/*led灯高电平1，低电平0，高电平是不亮*/
	while(1){
	P2 = 0x7e;//D8亮
	Delay500ms();
	P2 = 0xff;//D8灭
	Delay500ms();
	}
	https://github.com/Qixiaomao/51stc
}
