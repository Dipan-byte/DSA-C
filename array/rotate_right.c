#include <stdio.h>

void reverseArray(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) return 0;

    int arr[1000]; // assume n <= 1000
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    k = k % n;
    if (k < 0) {
        k += n; // handle negative k
    }

    // Step 1: reverse whole array
    reverseArray(arr, 0, n - 1);
    // Step 2: reverse first k elements
    reverseArray(arr, 0, k - 1);
    // Step 3: reverse remaining elements
    reverseArray(arr, k, n - 1);

    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) printf(" ");
    }

    return 0;
}
