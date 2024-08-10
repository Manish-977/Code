#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number =");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        printf(" a ,largest number \n");
        else 
        printf(" c , largest number \n");
    }
    else
    {
        if(b>c)
        printf("b , largest number \n");
        else
        printf("c,largest number \n");
    }
    return 0;
    }

