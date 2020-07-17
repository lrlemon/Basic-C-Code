//find max number from array using function..

#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4};

    int maximumValue=maximum(arr);
   printf("%d ",maximumValue);

}

void maximum(int x[])
{
    int i;
    int max=x[0];
    for(i=1;i<4;i++)
    {
       if(max<x[i])
           max=x[i];

    }
    return max;
}




