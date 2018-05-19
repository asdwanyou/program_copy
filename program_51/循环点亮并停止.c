#include<reg52.h>
#include<intrins.h>
#define uint unsigned int
#define uchar unsigned char
void delay(uint xms);
sbit led=P1;

void main()
{
	uchar aa;
	uint k;
	aa=0xFE;	
	while(k=8;k>0;k--)
	{
		led=aa;
		aa=_crol_(aa,1);
	}
}
void delay(uint xms)
{
	uint i,j;
	for(i=xms;i>0;i--)
		for(j=110;j>0;j--);
}//函数未调用