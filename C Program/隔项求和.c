#include<stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	if(k%2!=0)
		printf("%d",sum(k));
	else if(k%2==0)
		printf("%d",sum(k+1));
}
int sum(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%2==0)
			continue;
		sum=sum+n;
		
	}

	return sum;
}
