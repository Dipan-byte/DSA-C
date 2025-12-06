#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int currentSum = arr[0];
    int maxSum = arr[0];

    for(int i = 1; i < n; i++){
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    printf("Maximum Subarray Sum: %d", maxSum);

    return 0;
}
