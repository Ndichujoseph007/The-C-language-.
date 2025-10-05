
#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt the user to enter units
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculate the total bill
    if (units >= 0 & units <= 30) {
        bill = units * 20;
    } else if (units >= 31 & units <= 60) {
        bill = units * 25;
    } else {
        bill = units * 30;
    }
   
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}
