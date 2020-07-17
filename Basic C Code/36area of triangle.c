//3 bahu daya ase..triangle er area ber krte hbe
//area=sqrt(s*(s-a)*(s-b)*(s-c))
//s=(a+b+c)/2

#include<stdio.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter the number");
    scanf("%f %f %f",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area =%.2f",area);
}



