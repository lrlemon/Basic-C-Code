#include<stdio.h>
int main()

//use of for loop
{
    int i;
    for(i=1;i<=10;i++)
    {
        printf("c programming\n");
    }

    printf("\n");
    lemon();
    printf("\n");
    lokon();
    printf("\n");
    laila();

}


//use of while loop
void lemon()
{
    int i=1;
    while(i<=10)
    {
        printf("lemon\n");
        i++;
    }
}



//use of do while loop
void lokon()
{
    int i=1;
    do
    {
        printf("lokon\n");
        i++;
    }while(i<=10);
}



//even no print
void laila()
{
    int i;
    for(i=2;i<=20;i=i+2)
    {
        printf("%d\n",i);
    }
}

