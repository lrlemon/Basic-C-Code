#include<stdio.h>
int main()
{
    int i=1;
if(i<5)
        goto lemon;


lemon:
    printf("%d\t",i);
    i++;

    return 0;
}
