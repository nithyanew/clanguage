// interchange of array

#include<stdio.h>
void main()
{
    int i,j,temp;
    int a[5] = {8,7,4,3,5}; // {7,8,4,3,5} {4,8,7,3,5} {3,8,7,4,5} {4,8,7,3,5} {7,4,3,8,5} {5,6,3,8,7} {7,4,3,5,8}
    printf("enter the array elements:");
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if (a[j]<a[i])
            {
                 temp = a[i]; // a[i] = 8 // temp = 8
                 a[i] = a[j]; // a[i] = 5
                 a[j] = temp; // a[j] = 8
            }
        }
         printf("%d",a[i]);
    }
}