#include<stdio.h>
#include<math.h>
int main()
{
    double x=5.53;

    double result1=round(x);
    double result2=trunc(x);
    double result3=ceil(x);
    double result4=floor(x);

    printf("round(%lf)=%.2lf\n",x,result1);
    printf("trunc(%lf)=%.2lf\n",x,result2);
    printf("ceil(%lf)=%.2lf\n",x,result3);
    printf("floor(%lf)=%.2lf\n",x,result4);


}

