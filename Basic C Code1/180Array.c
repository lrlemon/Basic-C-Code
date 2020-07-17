//sum of upper or lower tringle...

#include<stdio.h>
int main()
{
    int i,j,row,col,A[10][10],uppersum=0,lowersum=0;
    printf("Enter the row and coloum:");
    scanf("%d %d",&row,&col);

    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
            {
                printf("A[%d][%d]=",i,j );
                scanf("%d",&A[i][j]);
            }
    }

   for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
            {

               printf("%d ",A[i][j]);
            }
            printf("\n");
    }


printf("\n");
printf("\n");
  //sum of diagonal element-

    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
            {
                if(i<j)
                {
                    uppersum=uppersum+A[i][j];
                }
                if(i>j)
                {
                    lowersum=lowersum+A[i][j];
                }
            }
    }
    printf("\nSum of upper triangle is %d",uppersum);
    printf("\nSum of lower triangle is %d",lowersum);

}

