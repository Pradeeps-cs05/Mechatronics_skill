#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("The Largerest number is a %d",a);
    }
    else if(b>c)
    {
        printf("The Largerest number is b %d",b);
    }
    else
    {
        printf("The Largerest number is c %d",c);
    }
    return 0;
}