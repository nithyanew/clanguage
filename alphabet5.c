// alphabet N

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
            else if( i == j){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    // alphabet I
     for(int i=1;i<=5;i++)
    {
        for( int j=1;j<=5;j++)
        {
            if(i == 1 || i == 5|| j == 3)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n"); 
    }
    // alphabet T
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i == 1 || j == 3)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    // alphabet H
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
    printf("\n");
    // alphabet Y
     for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j == 1 && i<=3)
            {
                printf("*");
            }
            else if(j == 5 && i<=3){
                printf("*");
            }
            else if(i == 3){
                printf("*");
            }
            else if(j == 3 && i>=3){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");
    // alphabet A
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

