/*
Name>Joseph Ndichu;
Reg No>CT100/G/26139/25;
Description>password system using Do while loop
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	//use a character array to store password
	char password[50];
	
	do {
	    printf("Enter the password:");
	    scanf("%s", password);
	    } while (strcmp(password, "1234")!= 0);
	    printf("Access Granted.\n");
	    
	    
	    return 0;

}