#include <stdio.h>

int main() {
    int i, j, k;
    int number = 5; 

    for (i = 0; i < number; i++) {
        
        for (j = 0; j < i; j++) {
            printf("  ");
        }
        
        for (k = 0; k < number - i; k++) {
            if (k % 2 == 0) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}
