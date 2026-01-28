#include <stdio.h>
int main() {
    int category, distance;
    printf("Enter user category (1-Student, 2-Employee): ");
    scanf("%d", &category);
    printf("Enter distance travelled (1-100 km): ");
    scanf("%d", &distance);
    switch(category) {
        case 1: // Student
            if(distance <= 30)
                printf("Eligible\n");
            else
                printf("Eligible with Extra Fee\n");
            break;
        case 2: // Employee
            if(distance <= 30)
                printf("Eligible\n");
            else
                printf("Not Eligible\n");
            break;
        default: // Invalid category
            printf("Invalid category\n");
            break;
    }

    return 0;
}