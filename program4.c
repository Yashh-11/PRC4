#include<stdio.h>

int main(){

    for (int i = 1; i<=5; i++)
    {
        for (int k = 1; k <= i-1; k++)
        {
            printf("  ");
        }
            for (int j = 5; j >= i; j--)
            {
                printf("%d ",j%2);
            }
            
        printf("\n");
    }
    
    return 0;
}