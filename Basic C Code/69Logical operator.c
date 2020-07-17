#include<stdio.h>
 int main()
 {
     char ch;
     int num1,num2,num3;
     printf("Enter the Character:");
     scanf("%c",&ch);

     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
        printf("It's vowel");

     else
        printf("It's consonant:");





    printf("\n");









    printf("Enter the number");
    scanf("%d %d %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
        printf("large=%d",num1);
    else if(num2>num1 && num2>num3)
        printf("large=%d",num2);
    else if(num3>num1 && num3>num2)
        printf("large=%d",num3);
    else
        printf("These are equal");

 }

