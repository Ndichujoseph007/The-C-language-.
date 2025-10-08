/*
Name>Joseph Ndichu;
Reg No>CT100/G/26139/25;
Description>password system using Do while loop
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	//use a character array to store password
	int password;
	int i = 0;
	

	
	do {
	    printf("Enter the password:");
	    scanf("%d", &password);
		i++;
	    } while ((password, ++i) &&(password ! = 1234));
	    printf("Access Granted.\n");
	    
	    
	    return 0;

}
