/*
Name: JOSEPH NDICHU NG'ANG'A.
Reg No: CT100/g/26139/25
Date: 10/19/2025
Description: Program to calculate bus fare
Rate: Ksh.50 per kilometer
*/

//Preprocessor directive
#include <stdio.h>

//Function prototype
float calculatefare(float distance);


//variable declaration
void main(){
	float distance, fare;
    float rate=50;
	
	//Introductory statement
	printf("Hello dear customer.Welcome to the fare payment service.\n");
	
	//Prompt to input distance covered
	printf("Please enter the distance covered in Kilometers:");
	scanf("%f", &distance);
	
	//Distance covered
	printf("You covered %.2fKm\n", distance);
	
	printf("Please take note that you shall be charged Ksh.50 for each kilometre covered.\n");
	
	//Function call
	fare=calculatefare(distance);
	
	//Output fare to user
	printf("Dear customer, your fare is Ksh.%.2f\n", fare);
	printf("Thank you for choosing our services.\n");
	
}
//Function declaration
float calculatefare(float distance){
	float fare;
	float rate=50;
	fare=distance*rate;
	return fare;
}