//1+2+3....+n..
//2+4+6+....+n..
//1+4+7+....+n..
#include<stdio.h>
int main()
{
    int n1,n2,n3,i,sum=0,sum1=0,sum2=0;

    printf("Enter the last number:");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        sum=sum+i;
    }
    printf("1+2+3...+n = %d\n",sum);





    //(2+4+6...+n=n

    printf("Enter the last number:");
    scanf("%d",&n2);
    for(i=2;i<=n2;i=i+2)
    {
        sum1=sum1+i;
    }
    printf("2+4+6...+n = %d\n",sum1);





    //(1+4+7+....n=n
    printf("Enter the last number:");
    scanf("%d",&n3);
    for(i=1;i<=n3;i=i+3)
    {
        sum2=sum2+i;
    }
    printf("1+4+7...+n = %d\n",sum2);

}
