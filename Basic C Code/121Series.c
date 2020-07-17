//2+4+6......N=N

#include<stdio.h>
int main()
{
    int num,i=2,sum=0;

    printf("Enter the last number of series: ");
    scanf("%d",&num);

    while(i<=num)
    {
        sum=sum+i;
        i=i+2;
    }

    printf("1+2+3.....+%d = %d",num,sum);


}

