#include <stdio.h>
int main() 
{
    int rows, i, j, odd_num=1;
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) 
    { 
        for (j = 1; j <= i; j++)
        {
            printf("%d ", odd_num);
            odd_num += 2; 
        }
        printf("\n"); 
    }
    return 0;
}