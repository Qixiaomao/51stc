#include <REGX52.H>


void Delay(unsigned int xms)		//@12.000MHz
{
	unsigned char i, j;
  while(xms){
	i = 2;
	j = 239;
	do
	{
		while (--j);
	} while (--i);
	xms--;
}
	}


void main()
{
  while(1){
	P2 = 0xfe; //1111 1110 D1
	Delay(200);
  P2 = 0xfd; //1111 1101 D2
	Delay(200);
	P2 = 0xfb; //1111 1011 D3
	Delay(200);
  P2 = 0xf7; //1111 0111 D4
	Delay(200);
  P2 = 0xef; //1110 1111 D5
	Delay(200);
	P2 = 0xdf; //1101 1111 D6
	Delay(200);
  P2 = 0xbf; //1011 1111 D7
	Delay(200);
	P2 = 0x7f; //0111 1111 D8
	Delay(200);
	
	
	}

}

