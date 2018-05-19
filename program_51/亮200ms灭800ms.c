#include<reg52.h>
#define uint unsigned int 
sbit led1=P1^0;
void delayms(uint);
void main()
{
	while(1)
	{
		led1=0;
		delayms(200);
		led1=1;
		delayms(800);

	}

}
void delayms(uint xms)
{
	uint i,j;
	for (uint i =xms; i>0;i--)
	{
		for(j=110;j>0;j--)
	}
}