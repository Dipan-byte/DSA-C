#include <stdio.h>

int main() {
    int arr[] = {10, 45, 23, 89, 12};
    int n = 5;
    int max = arr[0];  // Assume first element is maximum

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Largest element = %d", max);
    return 0;
}
