//Matrix Multiplication2

#include<stdio.h>
int main()
{
    int i,j,k,r1,r2,c1,c2, A[20][20],B[20][20],C[20][20],sum=0;

    printf("Enter the 1st row  & 1st col no:");
    scanf("%d %d",&r1,&c1);

    printf("Enter the 2nd row  & 2nd col no:");
    scanf("%d %d",&r2,&c2);


    while(c1!=r2)
    {
       printf("Error !!");

       printf("Enter the 1st row  & 1st col no:");
       scanf("%d %d",&r1,&c1);

        printf("Enter the 2nd row  & 2nd col no:");
        scanf("%d %d",&r2,&c2);
    }





    printf("Enter 1st Metrix:\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");

    }
    printf("\n");
    printf("\n");


    printf("Enter 2nd Metrix:\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");

    }







    printf("\n");

    printf("A=\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1 ;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    printf("B=\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2 ;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }




    //multiplying matrix
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                sum=sum+A[i][k]*B[k][j];
            }
            C[i][j]=sum;
            sum=0;
        }
    }


    printf("\n");

    //print C=

    printf("C=");
    printf("\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }





}




