//function & simple string..

#include<stdio.h>
int main()
{
    char str[]="Lemon";

    Display(str);


}

void Display(char ch[])
{
    int i;
    for(i=0;ch[i]!='\0';i++)
    {
      printf("%c",ch[i]);

    }

}





