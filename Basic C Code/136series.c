//1-2 + 3-4 +5-6+...

#include<stdio.h>
int main()
{
    int n,i,j,even=0,odd=0,sum;
    printf("Enter the number");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
    {
        odd=odd+i;
    }

    for(i=2;i<=n;i=i+2)
    {
        even=even+i;
    }

    sum=odd-even;

    printf("Sum=%d",sum);





   //OR

    /*for(i=1;i<=n;i++)
    {
        if(i%2==0)
            even=even+i;
        else
            odd=odd+i;
    }
    sum=odd-even;
    printf("Sum=%d",sum);
    */
}

