//find power...

#include<stdio.h>
int main()
{
    int base,exp,result;

    printf("Enter two number: ");
    scanf("%d %d",&base,&exp);

    result=pow(base,exp);
    printf("Power=%d\n",result);


    //or

    int result1=1,i;
    for(i=1;i<=exp;i++)
    {
        result1=result1*base;
    }
    printf("Power=%d",result1);



}

