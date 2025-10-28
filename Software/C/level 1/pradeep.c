#include<stdio.h>
int main()
{
    int i,n,result=0;
    for(i=1;i<=5;i++)
    {
        printf("%d",i);
        scanf("%d",&n);
    }
    if(n<0||n>9)
    {
        printf("Invalid input");
        return 0;
    }
    if(n==0)
    {
        continue;
    }
    result=result*10+n;
    {
        printf("%d",result);
    }
    return 0;
}