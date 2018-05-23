#include<stdio.h>
#define uint unsigned int
#define uchar unsigned char 
void delay(uint xms);
void display(uchar shi,uchar ge);
uchar num,num1,num2,shi,ge;
uchar code table[]={0xc0,0xf9,0xa4,
                    0xb0,0x99,0x92,
                    0x82,0xf8,0x80,0x90};
sbit m1=P2^0;
sbit m2=P2^1;
void main()
{
	TMOD=0x11;
	TH0=(65536-45872)/256;
	TL0=(65536-45872)%256;
	TH1=(65536-45872)/256;
	TL1=(65536-45872)%256;
	EA=1;
	ET0=1;
	ET1=1;
	TR1=1;
	while(1)
	{
		display(shi,ge);
	}
}
void delay(uint xms)
{
	uint i,j;
	for (i=xms;i>0;i--)
	{
		for(j=110;j>0;j--);
	}
}
void display(uchar shi,uchar ge)
{
	P0=table[shi];
	m1=0;
	m1=1;
	P0=0xff;
	m2=0;
	P0=table[ge];
	m2=1;
	delay(5);

}
void T0_time() interrupt 1
{
	TH0=(65536-45872)/256;
	TL0=(65536-45872)%256;
	num1++;
	if(num1==4)
	{
		num1=0;
		led1=~led1;

	}
}
void T1_time() interrupt 3
{
	TH1=(65536-45872)/256;
	TL1=(65536-45872)%256;
	num2++;
	if(num2==20)
	{
		num2=0;
		num++;
		if(num==60)
			num=0;
		shi=num/10;
		ge=num%10;
	}
}