//1+2+3+.....+n...
#include<stdio.h>
int main()
{
    int n1,i,sum=0;

    printf("Enter the last number:");
    scanf("%d",&n1);


    for(i=2;i<=n1;i=i+2)
    {
        sum=sum+i;
    }
    printf("1+2+3...+n = %d\n",sum);
}

