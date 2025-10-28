#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12)
        printf("31 days");
    else if(a==4 || a==6 || a==9 || a==11)
        printf("30 days");
    else if(a==2)
        printf("28 or 29 days");
    {
        if(a!=0 && a<=3)
         printf("\nQuarter 1");
        else if(a>3 && a<=6)    
         printf("\nQuarter 2");
        else if(a>6 && a<=9)
         printf("\nQuarter 3");
        else if(a>9 && a<=12)
         printf("\nQuarter 4");
        else
         printf("\nInvalid month");
    }
    return 0;
}