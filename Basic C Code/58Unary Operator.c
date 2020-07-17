#include<stdio.h>
int main()
{
    int num;
    printf("Enter the no:");
    scanf("%d",&num);

    if(num%2==0)
        printf("Even\n");
    if(num%2!=0)
        printf("Odd");
}

