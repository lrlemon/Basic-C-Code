#include<stdio.h>
int main()
{
    float num1,num2,temp;
    char oper;
    printf("Enter an operator(+,-,*,/)");
    scanf("%c",&oper);

    printf("Enter two number:");
    scanf("%f %f",&num1,&num2);

    switch(oper)
    {
    case '+':
        temp=num1+num2;
        printf("%f+%f =%f",num1,num2,temp);
        break;

    case '-':
        temp=num1-num2;
        printf("%f-%f =%f",num1,num2,temp);
        break;

    case '*':
        temp=num1*num2;
        printf("%f*%f =%f",num1,num2,temp);
        break;

    case '/':
        temp=num1/num2;
        printf("%f/%f =%f",num1,num2,temp);
        break;

    default:
        printf("Invalid\n");
        break;


    }

}


