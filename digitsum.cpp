#include<stdio.h> 
 
 int main()
{
    int n=2345;
    int count=0;
    if(n==0)
    count =1;

    while(n>0)
    {
        count++;
        n=n/10;
    }
    printf("%d",count);
    return 0;
}