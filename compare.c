#include <stdio.h>
#include <string.h>

int main(void) {
    char s[101];
    scanf("%100s", s);

    bool same = true;

    int len = strlen(s);
    for(int i = 0; i < (len/2); i++){
        int last = len - 1 - i;
        if(s[i] != s[last]) {
            same = false;
        }
    }   

    if(same == true) {
        printf("YES");
    } else {
        printf("NO");
    }
}