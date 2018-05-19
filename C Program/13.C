#include<stdio.h>	
char f1(char a);

#include<stdio.h>
char main()
{
	int n;
	char a[] = "yes";
	char b[] = "no";
	scanf("%d",&n);
    printf("%d\n",(n%2==0)? a: b);
	return 0;
}

//我的手机 2018/4/12 21:27:11
