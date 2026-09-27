#include <stdio.h>
#include <string.h>

int main(void) {
    char line[128];
    if(fgets(line, sizeof line, stdin) == NULL) {
        return 1;
    }
    size_t n = strlen(line);
    if (n > 0 && line[n-1] == '\n'){
        line[n-1] = '\0';
        --n;
    }
    printf("TEXT=[%s] LENGTH=%zu\n", line, n);
    return 0;
}