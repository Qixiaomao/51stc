#include <REGX52.H>

/*
   


*/

void Timer0Init()		//1����@12.000MHz
{
	TMOD |= 0x01;		//��ʱ��ʱ��1Tģʽ
	TMOD &= 0xF0;		//���ö�ʱ��ģʽ
	TL0 = 0x18;		//���ö�ʱ��ֵ
	TH0 = 0xFC;		//���ö�ʱ��ֵ
	TF0 = 0;		//���TF0��־
	TR0 = 1;		//��ʱ��0��ʼ��ʱ
	ET0 = 1;
	EA = 1;
	PT0 = 0;
}

/*
void Timer0_Routine() interrupt 1
{
	static unsigned int T0Count;
	TL0 = 0x18;		//���ö�ʱ��ֵ
	TH0 = 0xFC;		//���ö�ʱ��ֵ
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
	TMOD &= 0xF0; //��TMOD�ĵ���λ���㣬����λ���ֲ���
	TMOD |= 0x01; //��TMOD�����λ��1������λ���ֲ���
	TF0 = 0;
	TR0 = 1; //64535��������������1000�����м�ʱʱ��Ϊ1ms
	TH0 = 64535/256; //�߰�λ�ó�����
	TL0 = 64535%256;  //�Ͱ�λ�ó���
	ET0 = 1;
	EA = 1;
	PT0 = 0;
}
*/
