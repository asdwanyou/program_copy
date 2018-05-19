#include <stdio.h>
int  main()
{
	int n,i,yu[16]={0};
	printf("input a number min than 32767:");
	for (int i = 0; i >=2; i++)
	{
		yu[i]=n % 2;
		n/=2;
	}
	i=15;
	if (n!=0)
	{
		i = 0;
	}
	while(yu[i]!= 1) i--;

	for (; i >=0; i--)
	{
		printf("%d\n", yu[i]);
		if(i%4 == 0)
			printf(" ");
	}
	return 0;
}