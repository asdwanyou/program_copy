
#include<stdio.h>
int main()

{
	char a;
	scanf("%c",&a);
	if(a<=122&&a>=97)
		printf("%c\n",a-32);
	else
	{
		printf("error!\n");
	}

	return 0;

}
//小写字母变大写字母

