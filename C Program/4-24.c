#include<stdio.h>
int main()
{
	int n,m=0,k=0;
static int  sum=0;
	for(n=0;n<10;n++)
	{
		scanf("%d",&m);
		if(m>0)
		{
			k++;
			sum+=m;
		}
		
	}
	printf("num=%d",k);
	printf("sum=%d",sum);
	return 0;
}


我的手机 2018/4/24 22:20:07
#include<stdio.h>
void z(int n);
int main()
{
	int a;
	scanf("%d",&a);
	return (z(a));
}
void z(int n)
{
	char a[]="yes";
	char b[]="no";
	printf("%s\n",(n%2==0)?a:b);
	return;
}

我的手机 2018/4/24 22:20:17
#include<stdio.h>
int main()
{
	int i=0;
	for(;i<10;putchar('a'+i),i++);
	printf('\n');
	return 0;
}

我的手机 2018/4/24 22:20:29
#include<stdio.h>
int main()
{
	char a[]="yes";
	char b[]="no";
	int m=2,n,k=1;
	scanf("%d",&n);
	for(;m<=n/2;m++)
		if(n%m==0)
		{
			k=0;
			goto lp;
		}
lp:	k?printf(a):printf(b);
	printf("\n");
	return 0;

}
