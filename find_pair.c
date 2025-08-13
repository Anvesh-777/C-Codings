#include <stdio.h>

// Function to get the last digit of a number
int last_digit(int num) {
    return num % 10;
}

// Function to get the first digit of a number
int first_digit(int num) {
    while (num >= 10)
        num /= 10;
    return num;
}

int main() {
    int arr[] = {12, 25, 21, 32, 47, 53, 476};
    int n = sizeof(arr) / sizeof(arr[0]);
    int count = 0;

    printf("Pairs:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && last_digit(arr[i]) == first_digit(arr[j])) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                count++;
            }
        }
    }

    printf("\nTotal count: %d\n", count);
    return 0;
}
