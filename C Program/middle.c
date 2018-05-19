#include<stdio.h>
#include <stdlib.h>
void sort(int *a,int max);
int main(int argc, char const *argv[])
{
	int a[10];
	int mid,top,bot,x;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,10);
	
	top=0;
	bot=10;
	printf("input :\n");
	scanf("%d",&x);
	while(top<=bot)
	{
		mid=(top+bot)/2;
		if (x=a[mid])
		{
			printf("a[%d]is %d",mid,x);	
			exit(0);
					/* code */
		}
		else if(x>a[mid])
			top=mid+1;
		else
			bot=mid-1;
	}
	printf("not find\n");
	return 0;


}
void sort(int *a,int max)
{
	int temp;
	for(int i=0;i<max;i++)
	{
		for(int j=i+1;j<max;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;

			}
		}
	}		

}

