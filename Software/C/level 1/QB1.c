#include<stdio.h>
int main()
{
    int salary,bonus;
    char gender;
    scanf("%d",&salary);
    scanf(" %c",&gender);
    if(salary<25000 && salary>0)
    {
        bonus=5000;
    }
    else if(salary>=25000 && salary<50000)
    {
        bonus=7500;
    }
    else if(salary>50000)
    {
        if(gender=='M')
        {
            bonus=0.1*salary;
        }
        else if(gender=='F')
        {
            bonus=0.15*salary;
        }
    }
    else if(salary==0 && salary<0)
    {
       printf("Invalid Input");
    }
    printf("%d",bonus);
    return 0;
}