#include <stdio.h>

#include <stdio.h>
int main() {
    int room;
    char season;
    scanf("%d %c", &room,&season);
    switch (room) {
        case 1:
            if (season == 'A')
                printf("₹2500");
            else if (season == 'B')
                printf("₹2000");
            break;
        case 2:
            if (season == 'C')
                printf("₹4000");
            else if (season == 'D')
                printf("₹3000");
            break;
        default:
        print("Invalid room type");
    }

    return 0;
}
