//Matrix Addition & Subtraction

#include<stdio.h>
int main()
{
    int i,j,n,m, A[20][20],B[20][20],C[20][20];

    printf("Enter the row  & col no:");
    scanf("%d %d",&n,&m);

    //printf("Enter the col no:");
    //scanf("%d",&m);
    printf("Enter 1st Metrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");

    }
    printf("\n");
    printf("\n");


    printf("Enter 2nd Metrix:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");

    }

    printf("\n");


    printf("A=\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m ;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    printf("B=\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m ;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


    //A+B
    for(i=0;i<n;i++)
    {
        for(j=0;j<m ;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
        }

    }

    printf("\n");
    printf("\n");

    //C=A+B

    printf("A+B=\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m ;j++)
        {
            printf("%d ",C[i][j]);
        }
        printf("\n");
    }
}



