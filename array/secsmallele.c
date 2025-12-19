#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min1 = INT_MAX, min2 = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] > min1 && arr[i] < min2) {
            min2 = arr[i];
        }
    }

    if (min2 == INT_MAX)
        printf("No second smallest");
    else
        printf("Second Smallest: %d", min2);

    return 0;
}
