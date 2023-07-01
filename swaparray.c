// swap the numbers

#include<stdio.h>
void main()
{
    int i,n,a[5],temp;
    printf("\n enter the limit:");
    scanf("%d",&n);
    printf(" \n enter the array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i=i+3)
    {
     temp = a[i+3];
    a[i+3] = a[i+4];
    a[i+4] = temp;
    }
    for(i=0;i<5;i++)
   printf("\n%d",a[i]);
}

