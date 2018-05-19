#include<stdio.h>
void star(int k);
int main()
{
	int n;
	scanf("%d",&n);
	printf("output %d line star\n",n);
	star(n);
	return 0;
}
void star(int k)                           /*出错了*/
{
	int i,j;
	//scanf("%d",&n);
	for(i=1;i<=k;i++)               //？？？？循环不对
	{
		for(j=1;j<=i;j++)
		{
			printf("%c\n",'*');
		}
	    printf("\n");
	}

}