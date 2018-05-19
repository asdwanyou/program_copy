
#include <stdio.h>

int main() 

{

    int year；

    scanf("input year",&year );



    if((year%4==0&&year%100!=0)||year%400!=0)

    {

        printf("今年是闰年");

    }

    else

    {

        printf{"今年是平年"};

    }

    return 0;

}