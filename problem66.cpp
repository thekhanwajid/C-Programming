#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    ptr = arr;

    printf("Array elements are:\n");

    for (i = 0; i < 5; i++) {
        printf("Element %d = %d\n", i, *(ptr + i));
    }

    return 0;
}

