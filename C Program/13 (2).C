int main()
{

	char ch1,ch2;
	ch1=getchar();
	ch2=f1(ch1);
}
char f1(char a)
{
	if(97<=a&&a<=122)
		printf("%c\n",a-32); 
	else if(65<=a&&a<90)
		printf("%c\n",a+'A'-'a');
	else 	
		printf("error\n");
    return a;
}