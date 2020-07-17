#include<stdio.h>
int main()
{

    char  ch1[]="LEMON",ch2[]="LOKON";

    int i;

    for(i=0;i<5;i++)
    {
        printf("%c\n",ch1[i]);
    }


    printf("\n");
    //or

    int j=0;
    while(ch2[j]!='\0')
    {
        printf("%c\n",ch2[j]);
        j++;
    }




}

