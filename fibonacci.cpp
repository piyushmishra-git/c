#include <stdio.h>

int main()
{
    int t1=0,t2=1,next,n;
    printf("Enter Number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series:- \n%d %d ",t1,t2);
    for (int i = 1; i <=n ; i++)
    {
        next=t1+t2;
        printf("%d ",next);
        t1=t2;
        t2=next;
    }
    
    return 0;
}