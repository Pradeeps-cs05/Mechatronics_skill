#include<stdio.h>
int main()
{
    int a,b,c,sum;
    scanf("%d%d%d",&a,&b,&c);
    sum = a + b + c;
     if(sum==180 && (a==b || b==c || c==a))
    {
        printf("Isosceles triangle");
    }
    else if(sum==180 && a!=b && b!=c && c!=a)
    {
        printf("Scalene triangle");
    }
    else if(sum==180)
    {
        printf("Equilateral triangle");
    }
    else
    {
        printf("Not a triangle");
    }
    return 0;
}