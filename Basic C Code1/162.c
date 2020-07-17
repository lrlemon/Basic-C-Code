/*
  1
 121
12321

*/

#include<stdio.h>
int main()
{
    int row ,coloum,n;
    printf("Enter th number:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {
            printf(" ");
        }
        for(coloum=1;coloum<=row;coloum++)
        {

            printf("%d",coloum);
        }
        for(coloum=row-1;coloum>=1;coloum--)

        {
            printf("%d",coloum);
        }

        printf("\n");
    }
}

