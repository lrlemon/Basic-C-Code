//Maximum and Minimum of Array

#include<stdio.h>
int main()
{
    int arr[100],n,i,max,min;

    printf("How many number:");
    scanf("%d",&n);

    printf("Enter your numbers:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    max=arr[0];
    for(i=1;i<n;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("MAX=%d\n",max);


    min=arr[0];
    for(i=1;i<n;i++)
    {
        if(min>arr[i])
            min=arr[i];
    }
    printf("MIN=%d",min);
}
