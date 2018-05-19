#include<reg52.h>
#define uint unsigned int 
#define uchar unsigned char
void delay(uint xms);
sbit P2_0=P2^0;
sbit P2_1=P2^1;
sbit P2_2=P2^2;
sbit P2_3=P2^3;
uchar num;

uchar code table[]={0xc0,0xf9,0xa4,
	                0xb0,0x99,0x92,
	                0x82,0xf8,0x80,0x90};

void main()
{
	
	P2_0=0;
	while(1)
	{
		for(num=0;num<16;num++)
		{
			P0=table[num];
			delay(5000);

		}
		//break;
	}
	
	
}
void delay(uint xms)
{
	uint i,j;
	for(i=xms;i>0;i--)
		for(j==110;j>0;j--);
}