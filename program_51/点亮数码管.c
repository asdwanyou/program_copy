#include<reg52.h>
#define uchar unsigned char
//p77
sbit P2_0 = P2^0;
sbit P2_1 = P2^1;
sbit P2_2 = P2^2;
sbit P2_3 = P2^3;

uchar code table[]={0xc0,0xf9,0xa4,
	                0xb0,0x99,0x92,
	                0x82,0xf8,0x80,0x90};

void main()
{
	P2_0=1;
	P0=0xFE;
	//P0=table[6];//what is P0?


	/*P2_1=1;
	P0=table[1];
	P2_1=0;*/
	while(1);		
}