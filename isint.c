#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(void) {
    char a[101];
    if(fgets(a, sizeof a, stdin) == NULL) {
        return 0;
    }
    size_t n = strlen(a);
    if(n > 0 && a[n-1] == '\n') {
        a[n-1] = '\0';
        --n;
    }

    int result = 0;
    int place = 1;
    bool sign = false; // false : positive, true: negative
    for(int i = (int)n - 1; i >= 0; i--){
        if(a[i] == '+' || a[i] == '-' || a[i] == ' ') {
            if(a[i] == '-'){
                sign = true;
            }
            continue;
        } else if(a[i] >= '0' && a[i] <= '9'){
            result += (a[i] - '0') * place;;
            if(place <= 100){
                place *= 10;
            } else{
                printf("INVALID");
                return 0;    
            }
        } else {
            printf("INVALID");
            return 0;
        }
    }

    if(sign == true) {
        result *= -1;
    }
    printf("%d", result);
    return 0;
}