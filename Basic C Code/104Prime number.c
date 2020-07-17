#include<stdio.h>
int main()
{
    int i,n,count=0;

    printf("Enter the number");
    scanf("%d",&n);
    for(i=2;i<=n-1;i++)
    {
        if(n%i==0)
           {
               count++;
               break;
           }
    }
    if(count==0)
       printf("prime number");

    else
        printf("not prime number");
}
