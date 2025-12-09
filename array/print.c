#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int freq[1000] = {0}; // assume elements <= 999

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }

    for(int i = 0; i < n; i++) {
        if(freq[arr[i]] == 1)
            printf("%d ", arr[i]);
    }

    return 0;
}
