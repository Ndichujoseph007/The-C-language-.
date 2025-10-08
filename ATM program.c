/*
Name>Joseph Ndichu;
Reg No.>CT100/G/26139/25;
Description>ATM withdrawal program;
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    float balance;
    float withdrawal;
    
   //remaining balance ;
   printf("Please enter your cutrent account balance:");
   scanf("%f", &balance);
   
   while(balance > 0){
       printf("Enter amount to withdraw:");
       scanf("%f", &withdrawal);

    while(balance < withdrawal){
       printf("Amount too high!Try again:");
       scanf("%f", &withdrawal); 
    }
       balance -= witdrawal;
       printf("Succesful Withdrawal of:Ksh%.2f\n", Withdrawal);
       printf("New account balance:Ksh%.2f\n", balance);
       
   }
   printf("Account balance is zero or negative.Withdrawal not possible.\n");
}
