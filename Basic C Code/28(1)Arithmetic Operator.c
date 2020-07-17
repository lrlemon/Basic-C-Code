//write a program to create sum and average
#include<stdio.h>
int main()
{

    int num1,num2,sum;
    float avg;
    printf("Enter the two number:");
    scanf("%d %d",&num1,&num2);

    sum=num1+num2;
    printf("Sum=%d\n",sum);

    avg=(float)sum/2;
    printf("avg=%.2f",avg);

    return 0;
}
