 #include<stdio.h>
int main()
{
    //post increment
    int x=10;
    int y=x++;//10

    printf("X=%d\n",x);//11
    printf("Y=%d\n",y);//10
    printf("\n\n");

    //pre increment

    int a=10;
    int b=++a;//11

    printf("A=%d\n",a);//11
    printf("B=%d",b);//11
    printf("\n\n");


    //post decrement
    int c=10;
    int d=c--;//10

    printf("C=%d\n",c);//9
    printf("D=%d\n",d);//10
    printf("\n\n");

    //pre decrement

    int e=10;
    int f=--e;//9

    printf("E=%d\n",e);//9
    printf("F=%d",f);//9


}
