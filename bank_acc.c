#include <stdio.h>
void deposit(int *main_balance);
void withdrawal(int *main_balance);
// start with 1000 $




/*1st deposit
    @ deposit
    @ add balance to the main func
    @void
*/



void deposit(int *main_balance)
{
    int deposit_amount = 0;
    
    printf("Enter  amount of money you want to deposit: ");
    scanf("%d", &deposit_amount);
    
    // add it to the existing balance in the main function
    
    if (deposit_amount > 0)
    {
        *main_balance += deposit_amount;
        printf("your balance is add successfully\n");
        printf("your balance became %d\n", *main_balance);
    }
    else
        printf("You Enterd a wrong value :(");
}




/*2nd withdraw
    @ withdraw
    @ parms
        -acc balance: number
    @ dec.from the main value
    @ if the balance below the main acc balance define a error message
    @void
*/


void withdraw(int *main_balance)
{
    int withdraw_amount = 0;
    printf("Enter amount of money you want to withdraw: ");
    scanf("%d", &withdraw_amount);

    // add it to the existing balance in the main function
    
    if (withdraw_amount <= 0)
        printf("Wrong Entery , Try again\n");
    else if(withdraw_amount > *main_balance)
        printf("You have no enogh money for this transaction\n");
        
        if (withdraw_amount > 0)
        {
            *main_balance -= withdraw_amount;
            printf("your transaction had made successfully\n");
            printf("your balance became %d\n", *main_balance);
        }
}

/*
3rd check_balance
@check_balance
@void
*/

void check_balance(int main_balance){
    printf("Your balance is :%d \n", main_balance);
}



/*
4th main func
*/



int main()
{
    printf("Welcome To The Bank \n");
    printf("Your balance is  $1000\n");
    int balance = 1000;
    int choice;
    do
    {
        printf("\nPress 1 for Deposite , 2 for WithDraw , 3 for cheking your balance or 0 for Quit: ");
        scanf("%d", &choice);
        if (choice == 1)
            deposit(&balance);
        else if (choice == 2)
            withdraw(&balance);
        else if (choice == 3)
            check_balance(balance);
        else if (choice == 0)
            printf("Thank You For Using Our Bank App.\n");
        else
            printf("Wrong input , try again");

    } while (choice > 0);

    return 0;
}