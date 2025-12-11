#include <stdio.h>

int main() {
    int n1, n2;
    scanf("%d", &n1);

    int a[n1], b[1000], freq[10000] = {0};

    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
        freq[a[i]] = 1;
    }

    scanf("%d", &n2);

    int result[1000], rIndex = 0;

    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
        if (freq[b[i]] == 1) {
            result[rIndex++] = b[i];
            freq[b[i]] = 2;  // avoid duplicates
        }
    }

    for (int i = 0; i < rIndex; i++)
        printf("%d ", result[i]);

    return 0;
}
