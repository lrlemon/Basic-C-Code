#include<stdio.h>
int main()
{
   int num,temp,sum=0,rem;

   printf("Enter number:");
   scanf("%d",&num);

   temp=num;
   while(temp!=0)
   {
       rem=temp%10;
       sum=sum*10+rem;
       temp=temp/10;
   }
   printf("%d",sum);


}


