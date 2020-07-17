#include<stdio.h>
int main()
{
    int num1,num2;
    int temp;
    printf("Enter the number1:");
    scanf("%d",&num1);
    //printf("\n");
    printf("Enter the number2:");
    scanf("%d",&num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("Number1 is:%d\n",num1);
    printf("Number2 is:%d",num2);
}

