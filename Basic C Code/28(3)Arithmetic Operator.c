//area of triangle
#include<stdio.h>
int main()
{
    float base,height,area;

    printf("Enter the base and height");
    scanf("%f %f",&base,&height);

    area=(float)1/2*base*height;

    printf("Area=%.2f",area);
}
