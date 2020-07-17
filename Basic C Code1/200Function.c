//Use function to find square...

#include<stdio.h>
int main()
{
    int num1;

    printf("Enter number: ");
    scanf("%d",&num1);

    square(num1);
}

void square(int a)
{
    int result;
    result=a*a;
    printf("Square=%d",result);
}

