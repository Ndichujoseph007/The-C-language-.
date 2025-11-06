/*
Name: JOSEPH NDICHU NG'ANG'A.
Reg No: CT100/G/26139/25
Date: 4/11/2025
Description:Sales recording
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file_ptr;
    double transaction_amount;
    double total_sales = 0.0;
    int transactions_count = 0;

    // Open the text file for reading ("r")
    file_ptr = fopen("sales.txt", "r");

    if (file_ptr == NULL) {
        // Handle error if file cannot be opened
        perror("Error opening 'sales.txt'. Please ensure the file exists and contains transaction amounts.");
        return 1;
    }

    printf("Daily Sales Report.");

    // i. Reads all transactions from the file.
    // Use fscanf to read double values until EOF is reached (fscanf returns EOF)
    while (fscanf(file_ptr, "%lf", &transaction_amount) == 1) {
        // ii. Calculates and displays the total sales for the day.
        total_sales += transaction_amount;
        transactions_count++;
    }

    // iii. Ensures the file is properly closed after reading.
    if (fclose(file_ptr) == EOF) {
        perror("Error closing file");
        return 1;
    }
    
    // Display results
    if (transactions_count > 0) {
        printf("Transactions read: %d\n", transactions_count);
        // Display the total sales, formatted to two decimal places
        printf("Total Sales for the day: $%.2f\n", total_sales);
    } else {
        // Check for potential reading error if the file was not empty
        if (ferror(file_ptr)) {
             printf("An error occurred during file reading (possible non-numeric data).\n");
        } else {
             printf("The 'sales.txt' file was empty or no valid transactions were found.\n");
        }
    }

    return 0;
}