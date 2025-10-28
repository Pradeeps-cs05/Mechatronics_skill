#include<stdio.h>
int main()
{
    int c,s,P;
    scanf("%d %d",&c,&s);

        if(c<0)
        
            printf("Cost price cannot be negative");
            
        
        else if(s<0)
        {
            printf("Selling price cannot be negative");
        
        }

    
   else if(P>0)
   {
       printf("\nResult: Profit");
       P=s-c;
       printf("P=%d",P);
   }
   else if(P<0)
   {
       printf("\nResult: Loss");
       P=s-c;
       printf("P=%d",P);
   }
   else if(P==0)
   {
       printf("\nResult: Break even");
       P=s-c;
       printf("P=%d",P);
   }
    return 0;
}