//Searching a number (Linear search)

#include<stdio.h>
int main()
{
    int arr[]={10,20,30,40,50};
    int i,n;

    printf("Enter your searching element:");
    scanf("%d",&n);

    int count = 0;
    //position=-1;

    for(i=0;i<5;i++)
    {
        if(n==arr[i])
        {
            count=i+1;
            //position=i+1;
            break;
        }
    }
    if(count==0)
        printf("Not found");
    else

        printf("Found & this position is %d",count);


}
