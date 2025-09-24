/*
NAME: Joseph Ndichu
REG No.CT100/G/26139/25
description: questions prompted to users.
*/


#include <stdio.h>

int main(){
int height;    
int age;
int weight;
int number;
    printf("Hi,my names are JOSEPH NDICHU a student at KyU with Reg No.CT100/G/26139/25 and i would like to take you through a small session.\n");
	printf("1.Enter your age:");
	scanf("%d",& age);
	printf("Your age is %d.\n",age);
	printf("2.What's your height:");
	scanf("%d",& height);
	printf("You are %dft tall.\n",height);
	printf("3.Enter your weight in Kilograms:");
	scanf("%d",& weight);
	printf("Your weight is %dKgs.\n",weight);
	printf("5.Enter your working phone number.");
	scanf("%d",& number);
	printf("Your phone number is %d\n",number);
	printf("Thank You for your attention throughout the session,and I hope it was interesting.");
	
	return 0;
}
