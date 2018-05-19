#include<stdio.h>
#define PI 3.1415926535
int main()
{
	float i=PI;
	int a[]={(int)(i)};
	printf (a);
	return 0;

}// vc6++的结果是一颗心
//gcc 的结果是方块
//报错但是能运行