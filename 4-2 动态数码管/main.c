#include <REGX52.H>

unsigned char NixieTable[] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void Delay(unsigned int x)		
{
	unsigned char i, j;
	while(x){
		

	i = 12;
	j = 169;
	do
	{
		while (--j);
	} while (--i);
	}
	x--;
}



void nixie(unsigned char location,number){
	
	switch(location){
		case 1:P2_4=1;P2_3=1;P2_2=1;break;
		case 2:P2_4=1;P2_3=1;P2_2=0;break;
		case 3:P2_4=1;P2_3=0;P2_2=1;break;
		case 4:P2_4=1;P2_3=0;P2_2=0;break;
		case 5:P2_4=0;P2_3=1;P2_2=1;break;
		case 6:P2_4=0;P2_3=1;P2_2=0;break;
		case 7:P2_4=0;P2_3=0;P2_2=1;break;
		case 8:P2_4=0;P2_3=0;P2_2=0;break;
	}
	P0 = NixieTable[number];
	//Delay(1);
	P0 = 0x00; //��Ӱ
	
}

void main()
{
	
	while(1){
		nixie(1,1);
		//Delay(20);
		nixie(2,2);
		//Delay(20);
		nixie(3,3);
		//Delay(20);
		
		
	}
}