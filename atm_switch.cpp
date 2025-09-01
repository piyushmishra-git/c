#include <stdio.h>
int main()
{
    int task;
    float balance;
    long int pin,cpin;
    printf("Enter intial Balance:");
    scanf("%f",&balance);
    printf("Enter pin:");
    scanf("%ld",&pin);

    printf("Enter task\n1 to check balance\n2 to withdraw\n3 to deposit\nINPUT: ");
    scanf("%d",&task);

    switch (task)
    {
    case 1:
        printf("Balance = %.2f",balance);
        break;

    case 2:
    printf("Enter pin:");
    scanf("%ld",cpin);
    if(cpin == pin){
        float wammount;
        printf("Enter ammount to witdraw:");
        scanf("%f",&wammount);
        if(balance<=wammount){
            printf("Insufficient Balance\n");
        }else{
            balance = balance - wammount;
            printf("Ammount withdrawn \nNew balance = %.2f\n",balance);
        }
    }else{
        printf("Incorrect Pin\n");
    }
        break;
    
    case 3:
    float dammount;
        printf("Enter ammount to deposit:");
        scanf("%f",&dammount);
        balance = balance + dammount;
        printf("Ammount deposit \nNew balance = %.2f\n",balance);
        break;
        
        break;

    case 4:
        printf("Exit\n");
        break;
    
    default:
        printf("Invalid");
        break;
    }
    return 0;
}