
#include<reg52.h>
#include<intrins.h>
#define uint unsigned int 
#define uchar unsigned char
void delay(uint xms);
/*sbit p=P1;
void main()
{
	while(1){
		p=0xFD;
	    delay(1000);
	    p=0XF7;
        delay(1000);
        p=0XDF;
        delay(1000);
        p=0x7F;
	}
	
}*/
void main()
{
	uchar aa;
	aa=0xFD;//写成了7D，有奇效。
	while(1)
	{
		P1=aa;
		
		delay(1000);
		aa=_crol_(aa,2);

	}
	
}
void delay(uint xms)
 {
 	uint i,j;
    for(i=xms;i>0;i--)
    	for(j=110;j>0;j--); 
 }
	//ok