/*
1
1 2
1 2 3

*/

#include<stdio.h>
int main()
{
    int n,row,coloum;
    printf("Enter the number");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(coloum=1; coloum<=row; coloum++)
        {
            printf("%d",coloum);
        }
        printf("\n");
    }

}
