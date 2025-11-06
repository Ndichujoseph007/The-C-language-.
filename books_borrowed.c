/*
Name: JOSEPH NDICHU NG'ANG'A.
Reg No: CT100/G/26139/25
Date: 4/11/2025
Description:Book recording.
*/


#include <stdio.h>

void addBookTitle() {
    FILE *fp;
    char bookTitle[100];

    fp = fopen("borrowed_books.txt", "a");

    if (fp == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("Enter the book title: ");
    fgets(bookTitle, sizeof(bookTitle), stdin);

    fprintf(fp, "%s", bookTitle);

    fclose(fp);

    printf("Book title '%s' stored.\n",bookTitle);
}

int main() {
    addBookTitle();
    return 0;
}