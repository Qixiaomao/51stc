#include <REGX52.H>

void delay(unsigned int x)		
{
	unsigned char i, j;

	while(x--)
	{
	i = 12;
	j = 169;
	do
	{
		while (--j);
	} while (--i);
	}
}


void main()
{
	unsigned char LEDNum = 0;
	while(1)
	{
		if(P3_1==0)
		{
			delay(20);
			while(P3_1 == 0);
			delay(20);
			
			LEDNum++;
			P2 = ~LEDNum;
		}
		
	}
}
