#include<stdio.h>
int main()
{
    int num;
    int h,m;
    int h1,m1;
    scanf("%d",&num);    //1800
    m=num%100;
    h=num/100;
 
   if(h>=24)
    {
        printf("Invalid railway time input.");
    }
   else if(h==0 && m==0)
    {
        h1=12;m1=0;
        printf("12:00 AM");
    }
    else if(h<=12)
    {
       h1=h;m1=m;
        printf("%d:%02d PM",h1,m1);
    }
    else if(h>12)
    {
        h1=h-12;
        m1=m;
         printf("%d:%02d PM",h1,m1);
    }  
 return 0;
}