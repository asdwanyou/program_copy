#include<stdio.h>
int main()
{
	int i1=3,i2=4;
	int *pi1,*pi2,*pi3;
	pi1=&i1;
	pi2=&i2;
	pi3=0;
	pi3=pi1;
	pi1=pi2;
	pi2=pi3;
	printf("i1=%d\ni2=%d\n",i1,i2);
	printf("*pi1=%d\n*pi2=%d\n",*pi1,*pi2);
	return 0;
}
