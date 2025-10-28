#include<stdio.h>
int main()
{
    int a,b,rem,day;
    printf("Enter the number of chocolate :");
    scanf("%d",&a);
    printf("Enter the number of chocolate per day :");
    scanf("%d",&b);
    printf("The number of days  :");
    scanf("%d",&day);
    rem=a%b;
    if(rem==0)
    {
        printf("1");
    }
    else 
    {
        printf("0");
    }
    return 0;

}