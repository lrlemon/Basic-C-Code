#include<stdio.h>

int n,row,coloum;
int main()
{

/*
    1
  1 2
1 2 3
  1 2
    1
*/


    printf("Enter the number");
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
        printf("\n");
    }
    for(row=n-1;row>=1;row--)
    {

        for(coloum=1;coloum<=n-row;coloum++)
        {
            printf(" ");
        }
        for(coloum=1;coloum<=row;coloum++)
        {
            printf("%d",coloum);
        }

        printf("\n");
    }



/*
    1
  1 0
1 0 1
  1 0
    1
*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {
            printf(" ");
        }
        for(coloum=1;coloum<=row;coloum++)
        {
           if(coloum%2==0)
                printf("%d",0);
            else
                printf("%d",1);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {
            printf(" ");
        }
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
  0 0
    1

*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {
            printf(" ");
        }
        for(coloum=1;coloum<=row;coloum++)
        {
           if(row%2==0)
                printf("%d",0);
            else
                printf("%d",1);
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {
            printf(" ");
        }
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
  A B
    A


*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {
            printf(" ");
        }

        for(coloum=1;coloum<=row;coloum++)
        {
            printf("%c",64+coloum);
        }
        printf("\n");
    }

    for(row=n-1;row>=1;row--)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {
            printf(" ");
        }

        for(coloum=1;coloum<=row;coloum++)
        {
            printf("%c",64+coloum);
        }
        printf("\n");
    }








/*
    A
  A B
A B C
  A B
    A


*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {
            printf(" ");
        }

        for(coloum=1;coloum<=row;coloum++)
        {
            printf("%c",64+row);
        }
        printf("\n");
    }

    for(row=n-1;row>=1;row--)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {
            printf(" ");
        }

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
  * *
    *


*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {

                printf(" ");

        }
        for(coloum=1;coloum<=row;coloum++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(row=n-1;row>=1;row--)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {

                printf(" ");

        }
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
  # #
    #


*/

    printf("Enter the number");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {

                printf(" ");

        }
        for(coloum=1;coloum<=row;coloum++)
        {
            printf("#");
        }
        printf("\n");
    }

    for(row=n-1;row>=1;row--)
    {
        for(coloum=1;coloum<=n-row;coloum++)
        {

                printf(" ");

        }
        for(coloum=1;coloum<=row;coloum++)
        {
            printf("#");
        }
        printf("\n");
    }







}












