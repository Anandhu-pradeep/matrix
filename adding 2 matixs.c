/*program to add 2 matrices*/
#include<stdio.h>
void main()
{
    int a,b,i,j;
    int n[100][100];
    int m[100][100];
    int sum[100][100];

    printf("Enter the number of rows:");
    scanf("%d",&a);
    printf("Enter the number of columns:");
    scanf("%d",&b);
    
    printf("......ENTER THE FIRST MATRICS.....\n");
    for(i=0;i<a;i++)
    for(j=0;j<b;j++)
    {
        printf("Enter the number a%d%d:\t",i+1,j+1);
        scanf("%d",&n[i][j]);
    }


    printf("\n......ENTER THE SECOND MATRICS.....\n");
    for(i=0;i<a;i++)
    for(j=0;j<b;j++)
    {
        printf("Enter the number a%d%d:\t",i+1,j+1);
        scanf("%d",&m[i][j]);
    }

    for(i=0;i<a;i++)
    for(j=0;j<b;j++)
    {
    sum[i][j]=n[i][j]+m[i][j];
    printf("%d\t",sum[i][j]);

    if(j==b-1)
    {
    printf("\n\n");
    }
    }
}