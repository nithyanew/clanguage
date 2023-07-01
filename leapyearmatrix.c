// matrix

#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    printf("enter elements of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]%4 == 0)
            {
                a[i][j] = 0;
            }
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}