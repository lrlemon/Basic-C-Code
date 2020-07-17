//copy all elements of an array to another array

#include<stdio.h>
int main()
{
    int arr[30],arr1[30],i,n;

    printf("How many numbers:");
    scanf("%d",&n);

    printf("Enter your numbers:");

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array1=");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }


    for(i=0;i<n;i++)
    {
        arr1[i]=arr[i];
    }

    printf("\nArray2=");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);
    }
}
