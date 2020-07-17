#include<stdio.h>

int main()
{

/*
1
2 4
3 6 9
4 8 12 16

*/


    int n,row,coloum;
    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=row;coloum++)
        {
            printf("%d ",row*coloum);
        }
        printf("\n");
    }
}
