//1+1/2+1/3+.....

#include<stdio.h>
int main()
{
    float n=1,n1,i,sum=0;

    printf("Enter the last number:");
    scanf("%f",&n1);


    for(i=1;i<=n1;i++)
    {
        sum=sum+(n/i);

        if(i==1)
            printf("\n(1/%.f)+",i);
        else
            printf("(1/%.f)+",i);
    }
    printf(" = %.2f\n",sum);
}



