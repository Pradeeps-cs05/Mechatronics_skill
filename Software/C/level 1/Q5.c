#include<stdio.h>
int main()
{
    int a,T;
    float t;
    scanf("%d %f",&a,&t);
    T=t*60;
    printf("%d",T);
    if(a>=20000 && T>=360)
    {
        printf("\nfit healthy");
    }
    else
    {
        printf("\nunfit unhealthy");
    }
    return 0;

}