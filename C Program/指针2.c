#include<stdio.h>
int main()
{
	int i,j,*pi;
	i=50;
	pi=&j;
	j=*pi;
	printf("%d\n%d\n%d\n%d\n",i,j,*pi,pi);

}
