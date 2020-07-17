#include<stdio.h>
int main()
{
    int i,capital,small,digit;
    capital=small=digit=0;

    char ch[30];
    printf("Enter your String:");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
            capital++;
        else if(ch[i]>=97 && ch[i]<=122)
            small++;
        else if(ch[i]>='0' && ch[i]<='9')
            digit++;


    }


    printf("Capital=%d\n",capital);
    printf("Small=%d\n",small);
    printf("Digit=%d\n",digit);

}

