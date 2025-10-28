#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<=0 || a>=0)
    {
        printf("It is a digit");
    }
    else
    {
        printf("It is not a digit");
    }
    return 0;
}