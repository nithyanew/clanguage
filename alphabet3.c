// alphabet 3

#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j == 1 || j == 5) 
            {
                printf("*");
            }
            else if(i == 3){
                 printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}