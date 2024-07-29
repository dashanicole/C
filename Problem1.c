#include <stdio.h>

int main() {
    int n = 5, i, j;

    for (i = n; i >= 1; i--) {
        for (j = n - 1; j >= i; j--) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("*");
        }
        printf("\n");
    }
}

