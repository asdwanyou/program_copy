#include<stdio.h>
int main()
{
	char c;
	printf("input:");
	while(1)//新用法
	{
		c=getchar();
		if (c>='a'&&c<='z')
			putchar(c-'a'+'A');
		else 
			break;
	}



}