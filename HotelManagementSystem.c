/*
NAME:JOSEPH NDICHU NG'ANG'A.
Reg No:CT100/G/26139/25.
Date: 10/28/2025
Description :A hotel management system under arrays.
*/


//preprocessors

#include <stdio.h>//provides a variety of function for input and output and also file handling.
#include <stdlib.h>//provides a variety of commonly used functions
#include <time.h>//enables measurement of duration

// 1D Array - Weekly Revenue Tracker
void weeklyRevenueTracker() {

    double revenue[7];
    double totalRevenue = 0.0;
    double averageRevenue;
    int i;

    printf("Weekly Revenue Tracker.\n");

    // Input revenue for each day
    for (i = 0; i < 7; i++) {
        printf("Enter Day %d revenue: ", i + 1);
        scanf("%lf", &revenue[i]);
        totalRevenue += revenue[i];
    }

    // Calculate average revenue
    averageRevenue = totalRevenue / 7;

    // Display results
    printf("\nRevenue Summary.\n");
    printf("Total Weekly Revenue: %.2lf\n", totalRevenue);
    printf("Average Daily Revenue: %.2lf\n", averageRevenue);
}

// 2D Array - Room Occupancy (One Branch)
void roomOccupancy() {

    int occupancy[5][10];
    int floor, room;
    int occupiedCount, vacantCount;

    printf("\nRoom Occupancy (One Branch).\n");

    // Seed the random number generator
    srand(time(NULL));

    // Input random occupancy data
    printf("Generating Random Occupancy Data.\n");
    for (floor = 0; floor < 5; floor++) {
        for (room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // Randomly assign 0 or 1
        }
    }

    // Display occupancy status per floor
    for (floor = 0; floor < 5; floor++) {
        occupiedCount = 0;
        vacantCount = 0;
        for (room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }
        printf("Floor %d: Occupied = %d, Vacant = %d\n", floor + 1, occupiedCount, vacantCount);
    }
}

// 3D Array - Multiple Branches
void multipleBranches() {

    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    printf("\nRoom Occupancy (Multiple Branches).\n");

    // Seed the random number generator
    srand(time(NULL));

    // Assign random occupancy to each room in each branch
    printf("Generating Random Occupancy Data for All Branches.\n");
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; // Randomly assign 0 or 1
                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Display the total number of occupied rooms
    printf("Total Occupied Rooms Across All Branches: %d\n", totalOccupied);
}

int main() {
    weeklyRevenueTracker();
    roomOccupancy();
    multipleBranches();

    return 0;
}