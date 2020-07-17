/*

1
23
456

*/

#include<stdio.h>
int main()
{
    int row ,coloum,n,temp=0;
    printf("Enter th number:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=row;coloum++)
        {
            temp=temp+1;
            printf("%d",temp);
        }
        printf("\n ");
    }
}



