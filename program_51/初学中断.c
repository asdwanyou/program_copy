#include<reg52.h>
#define uint unsigned int 
#define uchar unsigned char
sbit led1=P1^0;
uchar code table[]={0xc0,
	              0xf9,0xa4,
                 0xb0,0x99,0x92,
                0x82,0xf8,0x80,0x90};
uchar num;
void delay(uint i);//led灯0号闪烁
void main()
{
	led1=0;
	TMOD=0x01;
	TH0=(65536-45872)/256;
	TL0=(65536-45872)/256;
	EA=1;
	ET0=1;
	TR0=1;
	while(1){}
}
void T0_time() interrupt 1
{
	TH0=(65536-45872)/256;
	TL0=(65536-45872)/256;
	num++;
	if(num==20)
	{
		num=0;
		led1=~led1;
	}

}
void delay(uint xms)
{
	uint i,j;
	for(i=xms;i>0;i--)
		for(j=110;j>0;j++);
}