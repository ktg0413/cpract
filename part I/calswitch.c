#include <stdio.h>

int main(void) {
    int a,b;
    char op;

    if(scanf("%d %c %d", &a, &op, &b) != 3) {
        return 1;
    }

    switch(op){
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if(b == 0) {
                printf("Error: Division by Zero");
                return 1;
            }
            printf("%d\n", a / b);
            break;
        default:
            printf("Invaild operator\n");
            return 1;
    }

    return 0;
}