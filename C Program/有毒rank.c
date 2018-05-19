#include<stdio.h>
#define N 5

int main(/*int argc, char const *argv[]*/)
{
	int a[N]={9,7,4,6,2};
	int i,j,k;
	for(i=0;i<=N-2;i++)
	{
		for(j=0;j<N-i+2;j++)
		{
			if(a[j]>a[j+1])
			{
				k=a[j];
				a[j]=a[j+1];
				a[j+1]=k;

			}
		}

	}
	printf("result\n");
	for(k=0;k<N-1;k++)
		printf("%3d",a[k]);
	printf("\n");
	return 0;
}