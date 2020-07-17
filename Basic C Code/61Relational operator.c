 #include<stdio.h>
 int main()
 {
     float marks;
     printf("Enter the marks:");
     scanf("%f",&marks);

     if(marks>=80)
        printf("You got A+");

     else if(marks>=70)
        printf("You got A");

     else if(marks>=60)
        printf("You got B");

     else if(marks>=50)
        printf("You got C");

     else if(marks>=33)
        printf("You got D");

     else
        printf("You FAIL");
   return 0;
 }
