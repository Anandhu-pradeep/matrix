/*transpose of matrixs*/
#include<stdio.h>
void main()
{
    int c,d,i,j;
    int a[100][100];
    int b[100][100];

    printf("enter the no. of rows and coloumns:\n");
    scanf("%d%d",&c,&d);
    
    
    printf("enter the elements \n");
    for(i=0;i<c;i++)
    for(j=0;j<d;j++)
    {
    printf("a%d%d=\t",i+1,j+1);
    scanf("%d",&a[i][j]);
    }

    printf("the numbers you entered for matrixs are:\n\n");
    printf("A = \t");
    for(i=0;i<c;i++)
    {
    for(j=0;j<d;j++)
    {
    printf("%d\t",a[i][j]);
    }
    printf("\n\t");
    }
    
    printf("\n");
    printf("the transpose of the matrixs are:\n\n");
    for(i=0;i<c;i++)
    for(j=0;j<d;j++)
    {
        b[j][i]=a[i][j];
    }

    printf("A' =\t");
    for(i=0;i<d;i++)
    {
    for(j=0;j<c;j++)
    {
    printf("%d\t",b[i][j]);
    }
    printf("\n\t");
    }
}
