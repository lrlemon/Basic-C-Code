#include<stdio.h>

int n,row,coloum;
int main()
{

/*
1 2 3
1 2
1
*/


    printf("Enter the number");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(coloum=1;coloum<=row;coloum++)
        {
            printf("%d",row);
        }
        printf("\n");
    }


/*
3 3 3
2 2
1
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
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
1 0 1
1 0
1
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
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
1 1 1
0 0
1
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(coloum=1;coloum<=row;coloum++)
        {
            printf("%c",64+coloum);
        }
        printf("\n");
    }







/*
A B C
A B
A
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(coloum=1;coloum<=row;coloum++)
        {
            printf("%c",64+row);
        }
        printf("\n");
    }







/*
C C C
B B
A
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(coloum=1;coloum<=row;coloum++)
        {

                printf("*");

        }
        printf("\n");
    }





/*
* * *
* *
*
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(coloum=1;coloum<=row;coloum++)
        {

                printf("%c",'#');

        }
        printf("\n");
    }




/*
# # #
# #
#
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(coloum=1;coloum<=row;coloum++)
        {

                printf("%c",'#');

        }
        printf("\n");
    }

}









