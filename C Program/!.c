#include<stdio.h>
int main()
{
	int i=1,t=1,r;
	scanf( "%d",&r);
	while(i<=r)
	{
		t*=i;
		i++;
	
	}
	printf("%d!=%d\n",r,t);
	return 0;
}