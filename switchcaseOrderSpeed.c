#include <stdio.h>
int main()
{
    int order, speed;
    scanf("%d %d", &order,& &speed);
    switch (speed)
    {
        case 1:
            printf("Delivery ₹50");
            break;

        case 2:
            if (order < 1000)
                printf("Delivery ₹100");
            else
                printf("Delivery Free");
            break;

        default:
            printf("Invalid speed ");
    }

    return 0;
}