#include<stdio.h>
int main()
{	
	int arr[5]={0,1,2,3,4};
	int *pi,*pi1,*pi2,*pi3;
	pi=&arr[1];
	pi1=&arr[2];
	pi2=&arr[4];
	printf("%d\n",*pi++);
	printf("%d\n",pi++);
	pi=&arr[1];
	printf("%d\n",*++pi);
	printf("%d\n",++pi);
	pi=&arr[1];
	printf("%d\n",(*pi)++);
	printf("%d\n",pi++);


}

