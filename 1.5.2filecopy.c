#include <stdio.h>

int main() {
    int nc;

    nc = 0;

    while ((getchar()) != EOF) {
        ++nc;
    }
    printf("%5d\n", nc);
}
