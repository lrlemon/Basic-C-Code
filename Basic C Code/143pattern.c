#include<stdio.h>

int n,row,coloum;
int main()
{

/*
1
1 2
1 2 3
1 2 3 4
*/


    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=row;coloum++)
        {
            printf("%d",row);
        }
        printf("\n");
    }


/*
1
1 0
1 0 1
1 0 1 0
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=row;coloum++)
        {
            if(coloum%2==0)
                printf("%d",0);
            else
                printf("%d",1);
        }
        printf("\n");
    }







/*
1
0 0
1 1 1
0 0 0 0
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=row;coloum++)
        {
            if(row%2==0)
                printf("%d",0);
            else
                printf("%d",1);
        }
        printf("\n");
    }




/*
A
A B
A B C
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=row;coloum++)
        {
            printf("%c",64+coloum);
        }
        printf("\n");
    }







/*
A
B B
C C C
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=row;coloum++)
        {
            printf("%c",64+row);
        }
        printf("\n");
    }







/*
*
* *
* * *
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=row;coloum++)
        {

                printf("*");

        }
        printf("\n");
    }





/*
#
# #
# # #
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=row;coloum++)
        {

                printf("%c",'#');

        }
        printf("\n");
    }

}









