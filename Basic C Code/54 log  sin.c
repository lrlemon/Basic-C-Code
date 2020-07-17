#include<stdio.h>
#include<math.h>
int main()
{
    double x=5;

    double result1=log(x);
    double result2=log10(x);
    double result3=exp(x);
    double result4=sin(x);
    double result5=cos(x);
    double result6=tan(x);

    printf("log(%lf)=%.2lf\n",x,result1);
    printf("log10(%lf)=%.2lf\n",x,result2);
    printf("exp(%lf)=%.2lf\n",x,result3);
    printf("sin(%lf)=%.2lf\n",x,result4);
    printf("cos(%lf)=%.2lf\n",x,result5);
    printf("tan(%lf)=%.2lf\n",x,result6);


}
