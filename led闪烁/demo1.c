#include <REGX52.H>
#include <INTRINS.H>


/*Ҫ���������ʵ��D8��˸*/

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
	/*led�Ƹߵ�ƽ1���͵�ƽ0���ߵ�ƽ�ǲ���*/
	while(1){
	P2 = 0x7e;//D8��
	Delay500ms();
	P2 = 0xff;//D8��
	Delay500ms();
	}
	https://github.com/Qixiaomao/51stc
}
