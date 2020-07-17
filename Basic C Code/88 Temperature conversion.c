#include<stdio.h>
int main()
{
    int choice;

    float faren,celsi;
    printf("1.for Fahrenheit to Celsius\n");
    printf("2.for Celsius to Fahrenheit\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        printf("Enter the Fahrenheit:");
        scanf("%f",&faren);
        celsi=(faren-32)/1.8;
        printf("Celsius=%f",celsi);
        break;

    case 2:
        printf("Enter the Celsius:");
        scanf("%f",&celsi);
        faren=(1.8*celsi)+32;
        printf("Fahrenheit=%f",faren);
        break;



    default:
        printf("Invalid\n");
        break;


    }

}

