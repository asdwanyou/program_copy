#include<reg52.h>
#include<intrins.h>
#define uint unsigned int
#define uchar unsigned char
void delayms(uint xms);
uchar aa;
void main()
{
	aa=0xfe;
	while(1)
	{
		P1=aa;
		delayms(500);
		aa=_crol_(aa,1);
	}
}
void delayms(uint xms)
{
	uint i,j;
	for(j=xms;j>0;j--)
		for(i=110;i>0;i--);
}