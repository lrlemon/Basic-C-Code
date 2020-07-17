#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter the Uppercase letter:");
    scanf("%c",&upper);

    lower=tolower(upper);
    printf("lowercase letter is:%c",lower);
    return 0;
}

