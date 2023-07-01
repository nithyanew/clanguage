// deceasing of array using bubble sort

#include<stdio.h>
void main()
{
    int i,j,a[5],temp;
    int n = 5;
    printf("\nenter the limit:");
    scanf("%d",&n);
    printf("\nenter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<(n-1);i++)
   {
    for(j=0;j<(n-1);j++)
    {
        if(a[j]<a[j+1])
        {
            temp = a[j];
            a[j]= a[j+1];
            a[j+1] = temp;
        }
    }
   }
    printf("\ndecreasing order");
     for(i=0;i<n;i++)
    printf("\n%d",a[i]);
}