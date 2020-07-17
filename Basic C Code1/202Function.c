//use function to find power..

#include<stdio.h>
int main()
{
    int base,exp,result;

    printf("Enter two number: ");
    scanf("%d %d",&base,&exp);


    lemon(base,exp);


}

void lemon(int a,int b)
{
    int result1=1,i;
    for(i=1;i<=b;i++)
    {
        result1=result1*a;
    }
    printf("Power=%d",result1);

}



