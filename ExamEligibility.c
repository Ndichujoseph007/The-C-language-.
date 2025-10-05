/*
Name>Joseph Ndichu;
Reg No.>CT100/G/26139/25;
Description>Exam eligibility;
*/

#include <stdio.h>
int main(int argc, char *argv[])
{
    int attendance;
    int avr_marks;
    
    printf("Are you eligible for exams?\nPlease enter your marks:");
    scanf("%d", &avr_marks);
    
    printf("Enter your attendance in percent:");
    scanf("%d", &attendance);
    
    if (attendance>=75 & avr_marks >=40){
        printf("Eligible for an exam.");
    }
    else 
    {
        printf("Not eligible.");
    }
    
    
return 0;
}