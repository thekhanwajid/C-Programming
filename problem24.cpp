#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 10; i++) {
        
        for (j = 2; j <= 10; j++) {
            printf("%2d x %2d = %3d\t", j, i, j * i);
        }
        printf("\n"); 
    }

    return 0;
}

