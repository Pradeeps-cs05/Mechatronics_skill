#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter two numbers:");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("The Largerest number is a %d",a);
    }
    else
    {
        printf("The Largerest number is b %d",b);
    }
    return 0;
}