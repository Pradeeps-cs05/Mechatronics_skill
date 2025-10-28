#include<stdio.h>
int main()
{
    char A;
    int B;
    printf("Enter the value:");
    scanf("%c",&A);
    printf("Amount=");
    scanf("%d",&B);
    if(A=='R')
    {
        if(B<=500)
        {
            printf("withdrawal successful");
        }
         else
    {
        printf("withdrawal exceed");
    }
    if(A=='P')
        {
            if(B<=1000)
            {
                printf("withdrawal successful");
            }
        
    }
    else
    {
        printf("withdrawal exceed");
    }
}
}