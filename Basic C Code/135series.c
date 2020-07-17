//1^2*2^2*3^2...+n...
//2^2*4^2*6^2...+n..
//1^2*3^2*5^2...+n..

#include<stdio.h>
int main()
{
    int n1,n2,n3,i,mul=1,mul1=1,mul2=1;

    printf("Enter the last number:");
    scanf("%d",&n1);
    for(i=1;i<=n1;i++)
    {
        mul=mul*(i*i);
    }
    printf("1^2*2^2*3^2...+n = %d\n",mul);





    //(2*4*6...+n=n

    printf("Enter the last number:");
    scanf("%d",&n2);
    for(i=2;i<=n2;i=i+2)
    {
        mul1=mul1*(i*i);
    }
    printf("2^2*4^2*6^2...+n = %d\n",mul1);





    //(1*3*5+....n=n
    printf("Enter the last number:");
    scanf("%d",&n3);
    for(i=1;i<=n3;i=i+2)
    {
        mul2=mul2*(i*i);
    }
    printf("1^2*3^2*5^2...+n = %d\n",mul2);

}

