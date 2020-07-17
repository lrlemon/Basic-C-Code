//1+3+5......N=N

#include<stdio.h>
int main()
{
    int num,i,sum=0;

    printf("Enter the last number of series: ");
    scanf("%d",&num);

    for(i=1;i<=num;i=i+2)
    {
        sum=sum+i;
    }

    printf("1+2+3.....+%d = %d",num,sum);


}
