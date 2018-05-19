#include <stdio.h>
int main()
{
	int n[5]={0,1,2,3,4};
	n[2]=100;
	
	for (int i = 0; i < 6; i++)
	{
		printf("%d\n",n[i] );
	}
	return 0;
}