#include<reg52.h>
#define uint unsigned int 
#define uchar unsigned char
uchar code table[]={0xc0,0xf9,0xa4,
                    0xb0,0x99,0x92,
                    0x82,0xf8,0x80,0x90};
/*void delay(uint xms);
sbit P2_0=P2^0;
void main()
{
	uint num=0;
	uint k=0;
	for(;k<10;K++)
	{
		P0_0=table[num];//for 循环经常出错
		num++;
	}
	
}*/
sbit P2_0=P2^0;
void delay(uint xms);
void main()
{
	uchar num=0;
	while(1)
	{
	    
	    P0=table[num];
		P2_0=0;
		delay(1000);
		P2_0=1;
		num++;
		if(num>9)
			break;
	}
}
void delay(uint xms)
{
	uint i,j;
	for(i=xms;i>0;i--)
		for(j=110;j>0;j--);
}                    
