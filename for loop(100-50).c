/*
Name>Joseph Ndichu;
Reg No.>CT100/G/26139/25;
Description>for loop printing 100-50 in descending order;

*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	//for (start; stop ; step)
	int i;
	
	for(i = 100; i >= 50; i--){
	    printf("%d\n", i);
	}
}