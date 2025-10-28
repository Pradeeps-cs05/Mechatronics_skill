#include<stdio.h>
int main()
{
    int a;
    printf("Enter a value:");
    scanf("%d",&a);
    if(a>1)
    {
        printf("greater than one");
    }
    else
    {
       printf("Lesser than one");
    }
    return 0;
}