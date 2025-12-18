#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int S;
    scanf("%d", &S);

    int left = 0, sum = 0;
    int minLen = INT_MAX;

    for (int right = 0; right < n; right++) {
        sum += arr[right];

        while (sum >= S) {
            if (right - left + 1 < minLen)
                minLen = right - left + 1;
            sum -= arr[left++];
        }
    }

    if (minLen == INT_MAX)
        printf("0");
    else
        printf("Minimum Length: %d", minLen);

    return 0;
}
