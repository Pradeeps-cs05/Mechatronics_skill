#include<stdio.h>
int main()
{
    char name[20];
    int roll_no,total_class,no_of_class_attended;
    float percentage;
    scanf("%s %d %d %d",name,&roll_no,&total_class,&no_of_class_attended);
    percentage=(no_of_class_attended*100.0)/total_class;
    if(name=="" || roll_no<=0 || total_class<=0 || no_of_class_attended<0 || no_of_class_attended>total_class)
    {
        printf("Invalid Input");
    }
    else 
    {
        printf("Attendance Percentage: %.2f%%\n",percentage);
    }
    return 0;
}