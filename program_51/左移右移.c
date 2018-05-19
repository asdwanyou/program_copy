#include<reg52.h>
#define uchar unsigned char
uchar a;
void main()
{
	a=0xaa;
	while(1)
	{
		a=a<<1;
	}
}
void main()
{
	a=0xaa;
	while(1){
		a=a>>1;

	}

}
#include<intrins.h>
aa=_crol_(aa,1);
aa=_cror_(aa,1);