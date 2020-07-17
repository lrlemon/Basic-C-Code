#include<stdio.h>
int main()
{
    int i,vowel,consonent,digit,word;
    vowel=consonent=digit=word=0;
    char ch[30];
    printf("Enter your String:");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
            vowel++;
        else if((ch[i]>='a' && ch[i]<='z')||(ch[i]>='a' && ch[i]<='z'))
            consonent++;
        else if(ch[i]>='0' && ch[i]<='9')
            digit++;
        else if(ch[i]==' ')
            word++;


    }
    word++;

    printf("Vowel=%d\n",vowel);
    printf("Consonent=%d\n",consonent);
    printf("Digit=%d\n",digit);
    printf("Word=%d\n",word);
}

