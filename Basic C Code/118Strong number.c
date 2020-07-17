#include<stdio.h>
int main()
{
    int i,num,temp,sum=0,fact,rem;

    printf("Enter the number:");
    scanf("%d",&num);

    temp=num;

    while(temp!=0)
    {
        rem=temp%10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
        printf("strong number :");
    else
        printf("Not Strong number :");
}
