#include<stdio.h>
int main()
{
    float cen,feren;
    printf("Enter the centegrate scale:");
    scanf("%f",&feren);

    cen=(feren-32)/1.8;

    printf("Farenhite scale is:%f",cen);
}

