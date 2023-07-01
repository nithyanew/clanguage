// marks of students

#include<stdio.h>
void main()
{
   int marks[5];
   int sum =0;
   printf("enter marks of five students:");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        sum = sum+marks[i];
    }
    printf("%d",sum);
}