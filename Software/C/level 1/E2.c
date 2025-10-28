#include<stdio.h>
int main()
{
    int age,gender;
    char name[20];
    scanf("%s %d %d",&name,&age,&gender);
    if(age<18)
    {
        printf("Eligibility: Not Eligible");
    }
    else
    {
        printf("Eligibility: Eligible\n");
    }
    if(gender==1)
    {
        printf("Salutation: Mr. %s\n",name);
    }
    else if(gender==2)
    {
        printf("Salutation: Ms. %s\n",name);
    }
    else
    {
        printf("Salutation: None (or handle as per system design)\n");
    }


    return 0;
}