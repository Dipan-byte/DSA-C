#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int prefixSum = 0, maxLen = 0;

    // range of prefix sum is from -n to +n
    int hash[20001];
    for (int i = 0; i < 20001; i++)
        hash[i] = -2;

    hash[10000] = -1; // prefixSum = 0 at index -1

    for (int i = 0; i < n; i++) {
        prefixSum += (arr[i] == 0 ? -1 : 1);

        int idx = prefixSum + 10000;

        if (hash[idx] != -2) {
            int len = i - hash[idx];
            if (len > maxLen)
                maxLen = len;
        } else {
            hash[idx] = i;
        }
    }

    printf("Longest Length: %d", maxLen);
    return 0;
}
