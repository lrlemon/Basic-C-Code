#include<stdio.h>
int main()
{

    char  ch1[]="LEMON";
    char  ch2[]="LEMON";
    int d;

    d=strcmp(ch1,ch2);

    if(d==0)
        printf("Equal");
    else
        printf("Not Equal");




}




