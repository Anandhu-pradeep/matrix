/*program to mul 2 matrices*/
#include<stdio.h>
void main()
{
    int a,b,i,j,c,d,x,y,k,l;
    int n[100][100];
    int m[100][100];
    int mul[100][100];
    
    printf("FOR THE 1ST MATRICS\n");
    printf("Enter the number of rows:");
    scanf("%d",&a);
    printf("Enter the number of columns:");
    scanf("%d",&b);

    printf("\nFOR THE 2ST MATRICS\n");
    printf("Enter the number of rows:");
    scanf("%d",&c);
    printf("Enter the number of columns:");
    scanf("%d",&d);
    
    printf("\n......ENTER THE FIRST MATRICS.....\n");
    for(i=0;i<a;i++)
    for(j=0;j<b;j++)
    {
        printf("Enter the number a%d%d:\t",i+1,j+1);
        scanf("%d",&n[i][j]);
    }


    printf("\n......ENTER THE SECOND MATRICS.....\n");
    for(i=0;i<c;i++)
    for(j=0;j<d;j++)
    {
        printf("Enter the number b%d%d:\t",i+1,j+1);
        scanf("%d",&m[i][j]);
    }

    printf("\n");
    for(i=0;i<a;i++)
    for(i=0;i<c;i++)
    {
    for(j=0;j<b;j++)
    for(j=0;j<d;j++)
    {
        for(k=0;k< b && d;k++)
    
    mul[i][j]+=n[i][k]*m[k][j];
    printf("%d\t",mul[i][j]);
    }
    printf("\n\n");
    }
}