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
   
   //continue with withdrawal if balance is more than 0
   
   while(balance > 0){
       printf("Enter amount to withdraw:");
       scanf("%f", &withdrawal);
       
       if(balance < withdrawal){
           printf("Insufficient balance please try a lower amount.");
       }else{
           balance -= withdrawal;
          
           printf(" Confirmed a succesful withdrawal of Ksh%.2f.\n", withdrawal);
           printf("New account balance:Ksh%.2f\n", balance);
       }
   }
   printf("Account balance is zero or negative.Withdrawal not possible.\n");
   
}