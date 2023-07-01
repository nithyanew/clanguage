// reverse of a array

#include<stdio.h>
void main()
{
    int a[5],i;
    printf("enter array elements:");
    for(int i=1;i<5;i++)
    {
    scanf("%d",& a[i]);
    }
    for(i=4;i>=1;i--)
    {
        printf("%d \n",a[i]);
    }

    
}