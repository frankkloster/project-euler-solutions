#include <stdio.h>

int main(void) {

    int s = 0;

    for (int i=1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            s += i;
        }
    }

    printf("%d\n", s);

    return 0;
}