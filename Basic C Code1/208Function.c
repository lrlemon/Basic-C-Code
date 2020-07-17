//Recursive function..

#include<stdio.h>
int fact(int n);
int main()
{
    int num,result;
    //Printf("Enter your numbers:");
    //scanf("%d",&num);

    result=fact(4);

    printf("%d",result);
}

int fact(int n)
{
    if(n==1)
        return 1;
    else
       return n*fact(n-1);

}

