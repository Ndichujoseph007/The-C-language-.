/*
Name:Joseph Ndichu
Reg No.CT100/G/26139/25
Description:Calculating the Volume and Surface Area of a Cylinder.

VOLUME= πr^2h;
Surface Area= 2πr^2+ 2πrh
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
	float height,radius,volume,surface_area;
	
	float pi = 3.142;
	
	printf("Calculating the Volume and Surface Area of a cylinder.");
	printf("\n1.Enter the height:");
	scanf("%f", &height);
	
	printf("2.Enter the radius:");
	scanf("%f", &radius);
	
	volume = pi*(radius*radius)*height;
	
	surface_area = (2*pi*radius*radius)+(2*radius*height);
	
	printf("\nVolume =%.4f\n", volume);
	
	printf("\nSurface Area=%.4f",surface_area);
	
}