#include <stdio.h>

static int next_id(void) {
    static int id = 0;
    return ++id;
}

int main(void) {
    size_t num;
    if(scanf("%zu", &num) != 1) {
        return 1;
    }
    for(size_t i = 0; i < num; i++){
        int a = next_id();
        printf("%d\n", a);
    }

    return 0;
}