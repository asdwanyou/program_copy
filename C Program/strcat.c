#include <stdio.h>

#include<string.h>

//#include <conio.h> have a problem
int main(int argc, char const *argv[])
{
	char str1[20]="great";// 这里写20是因为
	char str2[]="china";
	char str3[30];
	strcat(str1,str2);
	strcpy(str3,str1);
	puts(str1);
	puts(str3);
	prrintf("%d",strcmp(str3,str1));
	strlen(str1);
	strlen("English");
	strlen(str3,'i');
	//putch();
	return 0;
}