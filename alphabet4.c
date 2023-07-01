// alphabet A

#include<stdio.h>
void main()
{
    for(int i=1;i<=5;i++)
    {
        for( int j=1;j<=5;j++)
        {
            if(j == 1 || j == 5 )
            {
                 printf("*");
            }
               else if(i == 3 || i == 1){
                    printf("*");
                }
                else {
                    printf(" ");
                }
               
            
        }
         printf("\n");
    }
}