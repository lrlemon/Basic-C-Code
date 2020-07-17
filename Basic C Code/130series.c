//1^2+2^2+3^2...+n...
//1^2+3^2+5^2...+n..

#include<stdio.h>
int main()
{
    int n1,n2,i,sum=0,sum1=0;

    printf("Enter the last number:");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        sum=sum+i*i;
    }
    printf("1^2+2^2+3^2...+n = %d\n",sum);





    //(2+4+6...+n=n

    printf("Enter the last number:");
    scanf("%d",&n2);
    for(i=1;i<=n2;i=i+2)
    {
        sum1=sum1+i*i;
    }
    printf("1^2+3^2+5^2...+n = %d\n",sum1);




}

