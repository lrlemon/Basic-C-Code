#include<stdio.h>
int main()
{
    char ch[]="LEMON";
    char ch1[]="LOKON";

    strcat(ch,ch1);

    printf("%s\n",ch);


    //or
    char ch2[]="LEMON";
    //char ch1[]="LOKON";

    strcat(ch2,"LATIFUR");

    printf("%s\n",ch2);

}

