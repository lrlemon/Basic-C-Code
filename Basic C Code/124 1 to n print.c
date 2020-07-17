
#include<stdio.h>
int main()
{
    int n,i;

   printf("Enter the last number:");
    scanf("%d",&n);


    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }

    //1 to n ......odd number print

    printf("Enter the last number:");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }

   // 1 to n......even number print
    printf("Enter the last number:");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }

}
