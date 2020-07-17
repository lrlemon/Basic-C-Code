//sum and avg for 3 integer number
#include<stdio.h>
int main()
{

    int num1,num2,num3,sum;
    float avg;
    printf("Enter the two number:");
    scanf("%d %d %d",&num1,&num2,&num3);

    sum=num1+num2+num3;
    printf("Sum=%d\n",sum);

    avg=(float)sum/3;
    printf("avg=%.2f",avg);

    return 0;
}
