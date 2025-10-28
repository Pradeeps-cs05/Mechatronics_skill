#include<stdio.h>
int main()
{
    int a,b=1,c;
    printf("Enter a number: ");
    scanf("%d", &a);
    while(b!=0)
    {
        b=a/10;
        c=c+1;
        a=b;
    }
    printf("%d",c);
    return 0;
}