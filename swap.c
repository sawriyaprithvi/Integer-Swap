#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter the first number: ");
    
    if (scanf("%d", &x) != 1) {
        printf("Invalid input for the first number. Please enter an integer.\n");
        return 1;
    }

    printf("Enter the second number: ");
    
    if (scanf("%d", &y) != 1) {
        printf("Invalid input for the second number. Please enter an integer.\n");
        return 1;
    }

    printf("The value of x is %d and y is %d before swapping\n", x, y);

    swap(&x, &y);

    printf("The value of x is %d and y is %d after swapping\n", x, y);

    return 0;
}
