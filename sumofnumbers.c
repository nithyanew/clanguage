// sum of numbers
// int 123
// otput




#include<stdio.h>
void main()
{ int sum=0;
for(int i=123;i!=0;i=i/10)
    { 
    int r=i%10;
     sum=sum+r;
    }
    printf("%d",sum);
    
}