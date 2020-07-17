//Getting input for 2D Array

#include<stdio.h>
int main()
{
    int i,j,n,m, A[10][10];

    printf("Enter the row  & col no:");
    scanf("%d %d",&n,&m);



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
    for(i=0;i<n;i++)
    {
        for(j=0;j<m ;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}

