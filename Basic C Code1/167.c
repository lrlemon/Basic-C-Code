//Sum and Average

#include<stdio.h>
int main()
{
    int arr[100],sum=0,i,j,n;


    printf("How many numberS:");
    scanf("%d",&n);

    printf("Enter your numbers:");

    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }

    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }

    printf("%d\n",sum);
    printf("The average is= %.2f\n ",(float)sum/n);
}
