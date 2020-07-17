
#include<stdio.h>
 int main()
 {
     int num;
     printf("Enter the number:");
     scanf("%d",&num);

     if(num>0)
        printf("It's POSITIVE:");
     else if(num<0)
        printf("Ti's NEGATIVE:");
     else
        printf("Ti's ZERO:");

 }

