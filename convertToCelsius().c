/*
Name: JOSEPH NDICHU NG'ANG'A.
Reg No:CT100/G/26139/25
Description: Program to convert temperature in fahrenheit to degrees celcius.
Formula in use: C=(F-32)*5/9 where:
F=input in fahrenheit;
C= output in degree celsius
Date:10/19/2025
*/

//Preprocessor directive
#include <stdio.h>

//Function Prototype
float converttocelsius(float fahrenheit);




void main(){
	float input, celsius;
	
	//Introductory statement
	printf("Hell0,welcome to the temperature converter.\n");
	
	//Prompt user to input temperature value to be converted
	printf("Please enter the temperature in fahrenheit:");
	scanf("%f", &input);
	
	//Function call to convert
	celsius= converttocelsius(input);
	
	//Output result to user
	printf("The temperature in degrees celsius is %.2f\n", celsius);
	
	//Closing statement after successful execution
	printf("Thank you for using this service.\n");
	
}

//Function declaration
float converttocelsius(float fahrenheit){
float celsius=(fahrenheit - 32) * 5 / 9;
return celsius;
}

