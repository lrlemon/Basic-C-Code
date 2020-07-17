#include<stdio.h>

int n,row,coloum;
int main()
{

/*
* * * *
* * * *
* * * *
* * * *

*/


    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n;coloum++)
        {
            printf("*");
        }
        printf("\n");
    }


/*
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n;coloum++)
        {
            printf("%d",row);
        }
        printf("\n");
    }







/*
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n;coloum++)
        {
            printf("%d",coloum);
        }
        printf("\n");
    }




/*
A A A A
B B B B
C C C C
D D D D
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n;coloum++)
        {
            printf("%c",64+row);
        }
        printf("\n");
    }







/*
A B C D
A B C D
A B C D
A B C D
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n;coloum++)
        {
            printf("%c",64+coloum);
        }
        printf("\n");
    }








}










