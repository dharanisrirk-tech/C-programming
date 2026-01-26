#include <stdio.h>
int main() {
    int a=5,b=3;
    char op='+';
    switch (op){
        case '+':
            printf("Result=%d",a+b);
            break;
        case '-':
            printf("Result=%d",a-b);
            break;
        case '*':
            printf("Result=%d",a*b);
            break;
        case '/':
            printf("Result=%d",a/b);
            break;
        default:
            printf("Invalid operator");
    }
    return 0;
}