#include <stdio.h>
int main() {
    int class, age;
    float fare;
    scanf("%d", &class);
    scanf("%d", &age);
    switch (class) {
        case 1: 
            fare = 300;
            if (age < 12) {
                fare = fare * 0.5;       
            } else if (age >= 60) {
                fare = fare * 0.67;       
            }
            break;
        case 2:  
            fare = 1000;
            if (age < 12) {
                fare = fare * 0.5;        
            }
            break;
        default:
            printf("Invalid Class");
            return 0;
    }
    printf("Fare ₹%.0f", fare);
    return 0;
}
310 