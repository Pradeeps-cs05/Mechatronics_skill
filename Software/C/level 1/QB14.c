#include<stdio.h>
int main()
{
    int N;
    float D;
    scanf("%d %f",&N,&D);
    if(D<0)
    {
        printf("Invalid Position of the player");
    }
    else if(N==1 || N==3 || N==5)
    {
        D=D*3;
        printf("Player moves forward %.2f units",D);
    }
    else if(N==2 || N==4 || N==6)
    {
        D=D*2;
        printf("Player moves forward %.2f units",D);
    }
    else
    {
        printf("Invalid Input");
    }
    return 0;
}