//write a program to create sum,sub,mul,div,rem
#include<stdio.h>
int main()
{
    int num1,num2,sum,sub,mul;
    int div,rem;

    printf("Enter the rwo number:");
    scanf("%d %d",&num1,&num2);

    sum=num1+num2;
    printf("Sum=%d\n",sum);

    sub=num1-num2;
    printf("Sub=%d\n",sub);

    mul=num1*num2;
    printf("Mul=%d\n",mul);


    div=num1/num2;
    printf("Div=%d\n",div);

    rem=num1%num2;
    printf("Rem=%d\n",rem);
}
