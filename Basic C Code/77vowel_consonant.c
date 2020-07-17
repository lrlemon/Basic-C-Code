#include<stdio.h>
 int main()
 {
     char ch;
     int num1,num2,num3;
     printf("Enter the Character:");
     scanf("%c",&ch);

     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'
        ||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        printf("It's vowel");

     else
        printf("It's consonant:");

 }
