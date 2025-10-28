#include<stdio.h>
int main()
{
    int num,sum=0,add=0;
    scanf("%d",&num);
    for(int i=num+1;sum<5;i++)
    {
        add=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                add++;
                break;
            }
        }
        if(add==0)
        {
            printf("\n%d",i);
            sum++;
        }
    }
}