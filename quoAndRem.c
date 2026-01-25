#include <stdio.h>
int main() {
    int a, b,c,d;
    scanf("%d %d", &a, &b,&c,&d);
    a /= b; 
    c %= d;
    printf("%d", a,c);
    int e, f,g,h;
    scanf("%d %d", &e, &f, &g, &h);
    e /= f; 
    g %= h;
    printf("%d", e, g);
    int i, j,k,l;
    scanf("%d %d", &i, &j,&k,&l);
    i /= j;
    k %= l;
    printf("%d", i,k);
    return 0;
}
