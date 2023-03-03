#include <stdio.h>

void print_square(int size) {
    if (size <= 0) {
        printf("\n");
        return;
    }
    
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            printf("#");
        }
        printf("\n");
    }
}

int main() {
    int size;
    
    printf("Enter the size of the square: ");
    scanf("%d", &size);
    
    print_square(size);
    
    return 0;
}
