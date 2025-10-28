#include<stdio.h>
int main()
{
    int U;
    float B,S,T;
    scanf("%d",&U);
    if(U<=0)
    {
        B=0;
        printf("\nBill amount before surcharge:Rs.%.2f",B);
    }
    else if(U<=50)
    {
        B=U*0.50;
        printf("\nBill amount before surcharge:Rs.%.2f",B);
    }
    else if(U<=150)
    {
        B=50*0.50+(U-50)*0.75;
        printf("\nBill amount before surcharge:Rs.%.2f",B);
    }
    else if(U<=250)
    {
        B=50*0.50+100*0.75+(U-150)*1.20;
        printf("\nBill amount before surcharge:Rs.%.2f",B);
    }
    else if(U>250)
    {
        B=50*0.50+100*0.75+100*1.20+(U-250)*1.50;
        printf("\nBill amount before surcharge:Rs.%.2f",B);
    }
    {
    S=0.20*B;
    printf("\nSurcharge amount:Rs.%.2f",S);
    T=B+S;
    printf("\nTotal bill amount after surcharge:Rs.%.2f",T);
    }
    return 0;
}