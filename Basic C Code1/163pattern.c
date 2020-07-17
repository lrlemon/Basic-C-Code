#include<stdio.h>


int row ,coloum,n;


/*
  1
 121
12321
*/



int main()

{
    printf("Enter th number:");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
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


  lemon();

}







/*
   1
  121
 12321
1234321
 12321
  121
   1
*/





void lemon(){


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
        for(coloum=row-1;coloum>=1;coloum--)

        {
            printf("%d",coloum);
        }

        printf("\n");
    }
}





