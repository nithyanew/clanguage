// sum of the arrays

#include<stdio.h>
void main()
{
    int a[5],b[5],c[5],i;
    printf("enter first array of elements:");
    for(i=1;i<5;i++)
    scanf("%d",&a[i]);
    printf("\nenter second array of elements:");
    for(i=1;i<5;i++)
    scanf("%d",&b[i]);

    for(i=1;i<5;i++)
    {
    c[i] = a[i]+b[i];
    printf("\nthird array of elements at index %d is %d",i,c[i]);
    }

}