#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter the lowercase letter:");
    scanf("%c",&lower);

    upper=toupper(lower);
    printf("Uppercase letter is:%c",upper);
    return 0;
}
