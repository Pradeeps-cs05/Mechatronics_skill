#include<stdio.h>
int main()
{
    int a;
    int total,n1,n2,n3,n4;
    scanf("%d",&a);
    if(a<1000)
    {
        printf("Invalid input");
    }
    else
    {
        n1=a%10;
        a=a/10;
        n2=a%10;
        a=a/10;
        n3=a%10;
        a=a/10;
        n4=a%10;
        total=n1+n2+n3+n4;
        printf("%d",total);
    }
    return 0;
}