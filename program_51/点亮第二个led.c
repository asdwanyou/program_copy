#include<reg52.h>
#define uint unsigned int 
sbit led2=P1^0;
void main()
{
	led2=01010000;
}