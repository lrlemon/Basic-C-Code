//1*2+2*3+3*4......n*n

#include<stdio.h>
int main()
{
    /*int n1,n2,i,j,mul,sum=0;

    printf("Enter the 2 last number of series: ");
    scanf("%d %d",&n1,&n2);

    for(i=1;i<=n1;i=i+1)
    {
        for(j=2;j<=n2;j=j+1)
             {
                mul=i*j;
             }
             sum=sum+mul;
    }

    printf("1*2+2*3+3*4.....+%d*%d=%d",n1,n2,sum);
    */

    int n1,n2,sum=0,i=1,j=2;
    printf("Enter the 2 last number of series: ");
    scanf("%d %d",&n1,&n2);

    while(i<=n1 && j<=n2)
    {
        sum=sum+i*j;
        i=i+1;
        j=j+1;
    }
    printf("1*2+2*3+3*4.....+%d*%d=%d",n1,n2,sum);



}

