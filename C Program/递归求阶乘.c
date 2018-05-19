#include<stdio.h>
int fac(int n);
int main()
{
	int n,y;
	printf("input:");
	scanf("%d",&n);
	y=fac(n);
	printf("%d",y);
	return 0;
}
int fac(int n)
{
	if (n==1)
		return (1);
	else 
		return (n*fac(n-1));
}