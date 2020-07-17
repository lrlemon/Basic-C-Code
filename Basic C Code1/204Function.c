//Function & array pass...

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4};

    lemon(arr);


}

void lemon(int x[])
{
    int i;
    for(i=0;i<4;i++)
    {
        printf("%d ",x[i]);

    }

}



