//Simple Function...

#include<stdio.h>
int main()
{
    int num1,num2,result;

    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);

    sum(num1,num2);
}

void sum(int a,int b)
{
    int result;
    result=a+b;
    printf("Sum=%d",result);
}
