#include <REGX52.H>


//delay function that is a postone 
void delay(unsigned int x)
{
  while(1)
	{
		unsigned char i,j;
		
		while(1){
			i = 2;
			j = 239;
			do
			{
				while(--j);
				
			}while(--i);
			x--;
		
	}
}
	}


void main()
{
  while(1)
	{
		if(P3_1 == 0)
		{
			delay(20); //Ïû³ý°´¼ü¶¶¶¯
			while(P3_1==0);
			delay(20);
			P2_0 = ~P2_0;
		}
	}
}
