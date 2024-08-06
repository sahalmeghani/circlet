#include <stdio.h>

int main() {
    int number = 5; 

    
    for (int i = 1; i <= number; i++) {
        
        for (int j = i; j < number; j++) {
            printf("  ");
        }

        for (int j = 6 - i; j <= 5; j++) {
            printf("%d ", j);
        }
        
        for (int j = 4; j >= 6 - i; j--) {
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}
