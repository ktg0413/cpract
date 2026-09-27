#include <stdio.h>
#include <string.h>

int main(void) {
    char a[101];
    if(fgets(a, sizeof a, stdin) == NULL) {
        return 1;
    }
    size_t n = strlen(a);
    if(n > 0 && a[n-1] == '\n') {
        a[n-1] = '\0';
        --n;
    }

    int result = 0;
    int place = 1;

    for(int i = (int)n - 1; i >= 0; i--){
        if(a[i] >= '0' && a[i] <= '9'){
            result += (a[i] - '0') * place;
            if(place <= 10) {
                place *= 10;
            }
        } else {
            printf("INVALID");
            return 0;
        }
    }
    printf("%d %d", result, result * 2);
    return 0;
}