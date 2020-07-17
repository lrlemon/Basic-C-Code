#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter the number1:");
    scanf("%d",&num1);

    printf("Enter the number2:");
    scanf("%d",&num2);

    if(num1>num2)
        printf("Large=%d",num1);
    else if(num1<num2)
        printf("Large=%d",num2);
    else
        printf("Number are same");
}


