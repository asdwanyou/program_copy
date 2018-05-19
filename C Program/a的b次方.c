#include<stdio.h>

int main()
{
	int a;
	int b;
	scanf("%d%d",&a,&b);
	int m=1;
	while (b--)//循环
	{
		m*=a;
	}
	printf("%d\n",m);
	return 0;
}