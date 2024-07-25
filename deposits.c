/*
David Madrigal
Takes input of deposit from user and will update balance if greater than or equal to zero.
If input less than 0 then it is invalid.


*/

#include <stdio.h>

void makeDeposit(float *balance, float deposit);

int main(void)
{
    float balance = 0;
    float deposit = 0;
    int k = 0, N = 0;
    int *arr = NULL;

    printf("The current balance in your bank account is %11.2f.\n", balance);
    printf("You will be asked 3 times to deposit money.\n");
    for(k = 0; k<3; k++)
    {
        printf("Enter deposit amount: ");
        scanf("%f", &deposit);
        makeDeposit(&balance, deposit);
        printf("Balance: %11.2f\n", balance);
    }
    return 0;
}
void makeDeposit(float *balance, float deposit)
{
    if(deposit >= 0){
        * balance += deposit;
    }
    else{
        printf("Deposit cant be negative\n");
    }
}
