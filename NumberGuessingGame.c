/*
Name>Joseph Ndichu;
Reg No.>CT100/G/26139/25;
Description>Number Guessing Game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int secretNumber;
	int guess;
	int attempts =0;
	
	//seed the random number generator
	srand(time(0));
	
	//Generate a random number between 1 and 20
	
	secretNumber = (rand() % 20 )+ 1;
	
	printf("I'm thinking of a number between 1  and 20.\n");
	
	while(1){
	    printf("Enter your guess:");
	    scanf("%d", &guess);
	    attempts++;
	    
	    if(guess > secretNumber){
	        printf("Too high!.\n");
	    }else if(guess < secretNumber){
	        printf("Too low!");
	    }else{
	        printf("Congratulation!");
	        printf("You guessed the number in %d attempts.", attempts);
	        break;//exit the loop when the guess is correct
	    }	        
	    
	}
	
}