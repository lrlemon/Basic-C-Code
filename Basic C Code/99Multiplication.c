#include<stdio.h>
int main()
{
    while(1){


    int i,mul,fix;

    printf("Enter any number:");
    scanf("%d",&fix);
    for(i=1;i<=10;i++)
    {
       mul=fix*i;
       printf("%d * %d = %d\n",fix,i,mul);

    }

    }
}

