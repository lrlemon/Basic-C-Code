/*

*
**
* *
*  *
*****

*/

#include<stdio.h>
int main()
{
    int row ,coloum,n;
    printf("Enter th number:");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n;coloum++)
        {
            if(row==n || coloum==1 || coloum==row)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


