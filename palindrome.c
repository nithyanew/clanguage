#include<stdio.h>
void main()
{ int i =121;
    int n=i;
    int reverse = 0;
    for(i=121;i>=1;i=i/10)
    { 
      
       int  remainder=i%10;
        reverse=(reverse*10)+remainder;
        }
        
        if(n == reverse)
        { 
            printf("palindrome");
        }
        else { 
          printf("not a palindrome");

        }
    
}