#include<stdio.h>
int main()
{
	int age;
	char name[15];
	int gender;
	scanf("%s",&name);
	scanf("%d",&age);
	scanf("%d",&gender);
	{
if(gender==1)
{
	printf("Salutation:Mr. %s",name);
}
else if(gender==2)
{
	printf("Salutation:Ms. %s",name);
}
}
{
	if(age>=18)
	{
		printf("\nEligibility Status:Eligible");
	}
	else
	{
		printf("\nEligibility Status:Not Eligible");
	}
	return 0;
}
}