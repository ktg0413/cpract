#include <stdio.h>
#include <string.h>

int main(void) {
    char a[21], b[21], out[16];
    scanf("%20s %20s", a, b);

    if(strlen(a) + strlen(b) < 15) {
        snprintf(out, sizeof out, "%s-%s", a, b);
        printf("%s", out);
    } else {
        printf("TOO_LONG");
    }
    return 0;
}