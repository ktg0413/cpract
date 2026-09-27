#include <stdio.h>
#include <string.h>

int main(void) {
    char s[] = "cat";
    s[0] = 'b';
    printf("%s %zu %zu\n", s , strlen(s), sizeof s);
    return 0;
}