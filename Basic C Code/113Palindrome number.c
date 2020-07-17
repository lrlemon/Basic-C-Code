#include<stdio.h>
int main()
{
    int num,temp,rem,sum=0;
    printf("Enter the number:");
    scanf("%d",&num);


    temp=num;


    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    /*switch(num)
    {
    case 'sum':
        printf("It is palindrome");

    default:
        printf("It's not palindrome:");
    }
    */
    if(num==sum)
        printf("It's palindrome");
    else
        printf("It's not palindrome");

}
