#include <stdio.h>
int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int result = (a && 1) || (b && 1);
    printf("%d", result);
    int c, d;
    scanf("%d %d", &c, &c);
    int result = (c && 1) || (d && 1);
    printf("%d", result);
    int e, f;
    scanf("%d %d", &e, &f);
    int result = (e && 1) || (f && 1);
    printf("%d", result);
    return 0;
}

