//Transpose matrix...
#include<stdio.h>
int main()
{
    int i,j,row,col, A[20][20],Transpose[20][20];

    printf("Enter the  row  & col no:");
    scanf("%d %d",&row,&col);









    printf("Enter 1st Metrix:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");

    }
    printf("\n");
    printf("\n");








    printf("\n");

    printf("A=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col ;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


  //transpose matrix


    for(i=0;i<row;i++)
    {
        for(j=0;j<col ;j++)
        {
            Transpose[j][i]=A[i][j];
        }
        printf("\n");
    }



    printf("\n");

    printf("Transpose=\n");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row ;j++)
        {
            printf("%d ",Transpose[j][i]);
        }
        printf("\n");
    }





}





