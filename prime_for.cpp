#include <stdio.h>

int main()
{
    
    for(int i=2;i<=100;i++)
    {
        int t=1;
        for(int j=2; j<i/2; j++)
        {
            if(i%j ==0){
                t=0;
                break;
            }
        }
        if(t){
            printf("%d ",i);
        }
    }
    return 0;
}