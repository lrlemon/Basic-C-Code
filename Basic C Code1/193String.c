#include<stdio.h>

int main()
{
    int i=0,j,len=0,d;
    char ch1[30]="madam";
    char ch2[30];

    while(ch1[i]!='\0')
    {
        len++;
        i++;
    }

    for(j=0,i=len-1;i>=0;i--,j++)
    {
        ch2[j]=ch1[i];
    }

    ch2[j]='\0';

    printf("%s\n",ch1);
    printf("Reverse=%s\n",ch2);


    d =  strcmp(ch1,ch2);

    if(d==0)
        printf("Palindrome");
    else
        printf("Not palindrome");

}

