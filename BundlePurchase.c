/*
Name>Joseph Ndichu;
Reg No>CT100/G/26139/25;
Description>Mobile_Bundle_Purchase
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	
    int choice;	
	
	//list of data bundles offered 
	printf("Select data bundle.\n");
	printf("1. 100Mbs @ 50KES.\n");
	printf("2. 500Mbs @ 200KES.\n");
	printf("3. 1GB @ 350KES.\n");
	printf("4. 2GB @ 600KES.\n");
	
	//prompt to the user 
	printf("Enter your choice(1-4):");
	scanf("%d", &choice);
	
	//switch statement 
	switch(choice){
	    case 1:
	    printf("You selected 100Mb. cost = 50KES\n");
	    break;
	    case 2:
	    printf("You selected 500Mb. cost = 200KES\n ");
	    break;
	    case 3:
	    printf("You selected 1GB. cost = 350KES\n");
	    break;
	    case 4:
	    printf("You selected 2GB. cost = 600KES\n");
	    break;
	    
	    default:
	    printf(" Invalid choice\n");
	    
	     
	}
	
}