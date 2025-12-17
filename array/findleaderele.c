#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxFromRight = arr[n - 1];
    printf("%d ", maxFromRight);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
