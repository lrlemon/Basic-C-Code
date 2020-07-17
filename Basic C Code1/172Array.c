//2D

#include<stdio.h>
int main()
{
    int i,j, A[3][4]={{5,10,15,20},{25,30,35,40},{45,50,55,60}};

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
}
