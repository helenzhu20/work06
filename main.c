#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[10];
    array[0] = 0;

    srand(time(NULL));
    
    int i;
    for(i = 1; i < 10; i++) {
        array[i] = rand();
    }

    printf("Array: %d", array[0]);
    for(i = 1; i < 10; i++) {
        printf(", %d", array[i]);
    }
    printf("\n\n");

    int array2[10];
    int *ap = array;
    int *ap2 = array2;

    for(i = 0; i < 10; i++) {
        ap2[i] = ap[9 - i];
    }

    printf("––– Using [] –––\n");
    printf("Array2: %d", array2[0]);
    for(i = 1; i < 10; i++) {
        printf(", %d", array2[i]);
    }
    printf("\n\n");

    for(i = 0; i < 10; i++) {
        *(ap2 + i) = *(ap + 9 - i);
    }

    printf("––– Using * –––\n");
    printf("Array2: %d", array2[0]);
    for(i = 1; i < 10; i++) {
        printf(", %d", array2[i]);
    }
    printf("\n");
    
    return 0;
}