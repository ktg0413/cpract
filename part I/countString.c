#include <stdio.h>
#include <string.h>

int main(void) {
    char s[101];
    scanf("%100s", s);

    int eng = 0;
    int num = 0;

    for(int i = 0; i < strlen(s); i++) {
        if((s[i] >= 'A' && s[i] <= 'Z' )|| (s[i] >= 'a' && s[i] <= 'z')) {
            eng++;
        }
        if(s[i] >= '0' && s[i] <= '9') {
            num++;
        }
    }

    printf("%d %d", eng, num);

}