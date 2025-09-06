#include<stdio.h>
void main()
{
    int i,j,c,d,r,o,how,what;
    int a[100][100];
    int b[100][100];
    int tran[100][100]  ;
    int ath[100][100];

    printf("do you want to find transpose?\n Yes----- 1\n No------ 2\n select:\t");
    scanf("%d",&how);

    
    if(how == 2)
    {
    printf("FOR MATIRIX A \n");
    printf("enter the rows: ");
    scanf("%d",&c);                               /*for how much rows and col needed for [A]*/
    printf("enter the coloumn: ");
    scanf("%d",&d);

    printf("\nFOR MATIRIX b \n");
    printf("enter the rows: ");
    scanf("%d",&r);                                /*for how much row and col needed for [B]*/
    printf("enter the coloumn: ");
    scanf("%d",&o);


    printf("\nEnter the elements of [A]:\n");
    for(i=0;i<c;i++)
    for(j=0;j<d;j++)
    {                                               /*for entering the elements [A]*/
        printf(" a%d%d=",i+1,j+1);
        scanf("%d",&a[i][j]);
    }

    printf("\nEnter the elements of [b]:\n");
    for(i=0;i<r;i++)
    for(j=0;j<o;j++)
    {                                                /*for entering the elements[B]*/
        printf(" b%d%d=",i+1,j+1);
        scanf("%d",&b[i][j]);
    }


    

    printf("\n[A]=\t");
    for(i=0;i<c;i++)
    {
    for(j=0;j<d;j++)                                  /*to print [A]*/
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n\n\t");
    }


    
    printf("\n[B]=\t");
    for(i=0;i<r;i++)
    {
    for(j=0;j<o;j++)                                   /*to print [B]*/
    { 
        printf("%d\t",b[i][j]);
    }
    printf("\n\n\t");
    }


    do                                           /*for +,-,* */
    {
    
    
    printf("\n addiction----1\n subtraction----2\n multiplication----3\n To escape click any other number\n select:\t");
    scanf("%d",&what);

    
    if(what==1){
    if(c==r && d==o)
    {
    printf("ADDICTION\n [A]+[B]= ");
    for(i=0;i<c && r;i++)
    for(j=0;j<d && o;j++)
    {
        ath[i][j]=a[i][j]+b[i][j];                          /*  +  */
    }
    for(i=0;i<c;i++)
    {
    for(j=0;j<d;j++)
    {
    printf("%d ",ath[i][j]);
    }
    printf("\n\n\t  ");
    }
    }
    else
    {
        printf("\n\tit is not posibble\n");
    }
    }


    else if (what ==2){
    if(c==r && d==o)
    {
    printf("SUBTRACTION\n [A]-[B]= ");
    for(i=0;i<c && r;i++)
    for(j=0;j<d && o;j++)
    {
        ath[i][j]=a[i][j]-b[i][j];
    }
    for(i=0;i<c;i++)                                      /*   -   */
    {
    for(j=0;j<d;j++)
    {
    printf("%d ",ath[i][j]);
    }
    printf("\n\n\t  ");
    }
    }
    else
    {
        printf("\n\tit is not possible\n");
    }
    }      

    else if (what ==3){
    printf("MULTIPLICATION\n [A]*[B]= ");
    for(i=0;i<c;i++)
    for(i=0;i<r;i++)
    {
    for(j=0;j<d;j++)
    for(j=0;j<o;j++)                                    /*   *   */
    {
        for(int k=0;k< d && o;k++)
        ath[i][j]+=a[i][k]*b[k][j];
        printf("%d ",ath[i][j]);
    }
    printf("\n\n\t  ");
    }
    }

    else{
    printf("ERROR");
    }
    }while (what <=3);
    }
    else if (how==1)                                  /* for transpose */
    {
    printf("TRANSPOSE \n");
    printf("enter the rows: ");
    scanf("%d",&c);
    printf("enter the coloumn: ");
    scanf("%d",&d);

    printf("\nEnter the elements of [A]:\n");
    for(i=0;i<c;i++)
    for(j=0;j<d;j++)
    {
        printf(" a%d%d=",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    /*to print [A]*/

    printf("\n[A]=\t");
    for(i=0;i<c;i++)
    {
    for(j=0;j<d;j++)
    {
        printf("%d\t",a[i][j]);
    }
    printf("\n\n\t");
    }

    printf("Transpose of matrix [A] is \n");
    printf("\n[A']=\t");
    for(i=0;i<c;i++)
    for(j=0;j<d;j++)
    {
        tran[j][i]=a[i][j];
    }
    for(i=0;i<d;i++)
    {
    for(j=0;j<c;j++)
    {
        printf("%d\t",tran[i][j]);
    }
    printf("\n\n\t");
    }
    }
    else
    {
        printf("ERROR TRY AGAIN");
    }
}