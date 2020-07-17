//Use function to find area of triangle..

#include<stdio.h>
int main()
{
    double base,height;

    printf("Enter Base and Height: ");
    scanf("%lf %lf",&base,&height);

    Triangle(base,height);
}

void Triangle(double a,double b)
{
    double area;
    area=(float)1/2*a*b;
    printf("Area=%.2lf",area);
}

