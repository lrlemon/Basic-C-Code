//Fibonacci series using array

#include<stdio.h>
int main()
{
    int arr[100],n,i;

    printf("How many number:");
    scanf("%d",&n);

    arr[0]=0;
    arr[1]=1;

    for(i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
        //arr[0]=arr[1];
         //arr[1]=arr[i];
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);

    }

}
