#include <stdio.h>
int main() {
    int type, units;
    float bill = 0;

    printf("Enter connection type (1-Domestic, 2-Commercial): ");
    scanf("%d", &type);

    printf("Enter units consumed: ");
    scanf("%d", &units);

    switch(type) {
        case 1:
            if(units <= 100)
                bill = units * 3;
            else
                bill = (100 * 3) + ((units - 100) * 4);
            break;
        case 2: 
            if(units <= 100)
                bill = units * 7;
            else
                bill = (100 * 7) + ((units - 100) * 10);
            break;
        default:
            printf("Invalid connection type\n");
            return 0;
    }
    printf("Bill ₹%.0f\n", bill);
    return 0;
}
