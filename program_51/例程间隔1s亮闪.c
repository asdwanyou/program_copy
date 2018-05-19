#include<reg51.h>
#define uint unsigned int//将unsigned int用uint代替
sbit led1=P1^0;//声明P1口第一位
uint i,j;
void main()
{
	while(1)
	{
		led1=0;
		for (i=1000;i>0;i--)
			for (j=110;j>0;j--);
		led1=1;
		for(i=1000;i>0;i--)
			for(j=110;j>0;j--);	
	}
}