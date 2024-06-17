#include <stdio.h>

int main() {
    int a[100], n, i, j, duplicates_count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements are: ");
    for (i = 0; i < n; i++) {
        int duplicate_found = 0;

        // Check for duplicates starting from the current element
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) { 
                if (!duplicate_found) {
                    printf("%d ", a[i]); // Print only once for each duplicate element
                    duplicates_count++;
                    duplicate_found = 1; // Flag to avoid repeated printing
                }
                // Shift array elements to avoid counting the same duplicates multiple times
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--; // Decrease the array length
                j--; // Adjust the index after shifting
            }
        }
    }

    if (duplicates_count == 0) {
        printf("None");
    }

    printf("\nTotal number of duplicate elements: %d\n", duplicates_count);

    return 0;
}