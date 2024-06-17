#include <stdio.h>

int main() {
    int a[100], n, new_len = 0;
    int unique = 1;

    printf("Enter how many numbers: ");
    scanf("%d", &n);
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Move unique elements to the beginning of the array
    for (int i = 0; i < n; i++) {
        unique = 1; // Assume the current element is unique
        for (int j = 0; j < new_len; j++) {
            if (a[i] == a[j]) {
                unique = 0; // Found a duplicate
                break;
            }
        }
        if (unique) {
            a[new_len++] = a[i]; // Add the unique element to the new array
        }
    }

    printf("Array without duplicates: ");
    for (int i = 0; i < new_len; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");


}