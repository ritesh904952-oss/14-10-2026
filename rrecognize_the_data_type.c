#include<stdio.h>
int main()
{
    char a;
    printf("enter something :");
    scanf("%c",&a);

    if (a>='0' && a<='9')
    printf("the data type is : integer");

    else if(a>='a' && a<='z')
    printf("the data type is : character");
    
}