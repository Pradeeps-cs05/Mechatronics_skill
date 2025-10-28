#include<stdio.h>
int main()
{
    char size,type;
    int use;
    scanf("%c %c %d",&size,&type,&use);
    {
    if(size=='S')
    {
        printf("The size smaller");
    }
    else if(size=='L')
    {
        printf("The size Larger");
    }
    else if(size=='M')
    {
        printf("The size Medium");
    }
}
    {
    if(type=='G')
    {
        printf("\nGasoline");
    }
    else if(type=='P')
    {
        printf("\nPetroleum");
    }
    else if(type=='E')
    {
        printf("\nEletric");
    }
    {
    if(use==1)
    {
        printf("\npersonal");
    }
    else if(use==2)
    {
        printf("\ncomercial");
    }
    else if(use==3)
    {
        printf("\npublic");
    }
    else{
        printf("Invalid Input");
    }
}


    return 0;
}
}