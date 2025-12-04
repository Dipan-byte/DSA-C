#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n - 1];
    int sum = n * (n + 1) / 2;
    int arrSum = 0;

    for (int i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        arrSum += arr[i];
    }

    printf("Missing Number: %d", sum - arrSum);

    return 0;
}
