#include<stdio.h>
int main()
{
	int a,b;
	for(a=1;a<=9;a++)
	{
		for(b=1;b<9;b++)
		{
			printf("%d*%d=%d\t",a,b,a*b); 		
		} 	
	}
	return 0;
}
