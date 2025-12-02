#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[1000] = {0}; // assume values <= 999

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    for (int i = 0; i < 1000; i++) {
        if (freq[i] > 0) {
            printf("%d -> %d times\n", i, freq[i]);
        }
    }

    return 0;
}
