#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int longest = 0;

    for (int i = 0; i < n; i++) {
        int start = arr[i];
        int count = 1;
        int found;

        found = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == start - 1) {
                found = 1;
                break;
            }
        }

        if (!found) {
            int next = start + 1;
            while (1) {
                int exists = 0;
                for (int k = 0; k < n; k++) {
                    if (arr[k] == next) {
                        exists = 1;
                        break;
                    }
                }
                if (exists) {
                    count++;
                    next++;
                } else {
                    break;
                }
            }
            if (count > longest)
                longest = count;
        }
    }

    printf("Longest Consecutive Length: %d", longest);
    return 0;
}
