//Simple Matrix

#include<stdio.h>
int main()
{
    int i,j, A[3][4],B[3][4];

    //printf("Enter the row  & col no:");
    //scanf("%d %d",&n,&m);

    //printf("Enter the col no:");
    //scanf("%d",&m);
    printf("Enter 1st Metrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");

    }
    printf("\n");
    printf("\n");


    printf("Enter 2nd Metrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");

    }

    printf("\n");


    printf("A=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4 ;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");

    printf("B=\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<4 ;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
}


