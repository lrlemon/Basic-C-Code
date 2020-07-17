 #include<stdio.h>
 int main()
 {
     char ch1[30]="Lemon";
     char ch2[30]="Lokon";
     char temp[30];

     printf("Before swapping:\n");
     printf("%s\n",ch1);
     printf("%s\n\n",ch2);



     strcpy(temp,ch1);
     strcpy(ch1,ch2);
     strcpy(ch2,temp);


     printf("After swapping:\n");
     printf("%s\n",ch1);
     printf("%s\n",ch2);
 }
