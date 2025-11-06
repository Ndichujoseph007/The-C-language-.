/*
Name: JOSEPH NDICHU NG'ANG'A.
Reg No: CT100/G/26139/25
Date: 4/11/2025
Description: Results,and student information.
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for student information
struct Student {
    char name[50];
    int registrationNumber;
    float totalMarks;
};

int main() {
    FILE *fp;
    struct Student student;

    // Open the binary file for reading
    fp = fopen("results.dat", "rb");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1; // Indicate an error
    }

    printf("Student Examination Results:\n");

    // Read student records from the file and display them
    while (fread(&student, sizeof(struct Student), 1, fp) == 1) {
        printf("Name: %s\n", student.name);
        printf("Marks: %.2f\n", student.totalMarks);
        printf("\n");
    }

    // Close the file
    fclose(fp);

    return 0;
}