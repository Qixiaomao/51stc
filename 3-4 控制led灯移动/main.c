#include <REGX52.H>

void delay(unsigned int x){
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

void main(){
	unsigned char LEDNum = 0;
	P2=~0X01;
	while(1){
		
	  if(P3_0 ==0)
		{
			delay(20);
			while(P3_0==0);
			delay(20);
			
			LEDNum++;
			if(LEDNum>=8)
				 LEDNum=0;
			P2 = ~(0x01<<LEDNum);
		}		
    
     if(P3_1 == 0)
		 {
			 delay(20);
			 while(P3_1==0);
			 delay(20);
			 
			 if(LEDNum == 0)
				 LEDNum = 7;
			 else
				 LEDNum--;
			 P2 = ~(0X01<<LEDNum);
			 
			 
		 }			 
	
	
	}


}