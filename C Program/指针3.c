#include<stdio.h>
int main()
{
	int num;
	if(num<=20)
	{
		scanf("%d",&num);
	}
	fuc(num);
	return 0;
}
int fuc(int j)
{
	int i;
	int a[20];
	int k;
	for(i=0;i<j;i++)
	{
		scanf("%d",&a[i]);
	}
	for(k=j-1;k>0;--k)
	{
		printf("%d",a[k]);
	}
	printf("%d",a[0]);
	
	return 0;
}

